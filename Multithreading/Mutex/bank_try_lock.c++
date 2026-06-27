#include <iostream>
#include <mutex>
#include <thread>

class Account
{
public:
    int balance;
    std::mutex mtx;

    Account(int money) : balance(money) {}
};

void transfer(Account& from, Account& to, int amount)
{
    int result = std::try_lock(from.mtx, to.mtx);

    if (result == -1)
    {
        if (from.balance >= amount)
        {
            from.balance -= amount;
            to.balance += amount;

            std::cout << "Transferred "
                      << amount << '\n';
        }

        from.mtx.unlock();
        to.mtx.unlock();
    }
    else
    {
        std::cout << "Could not acquire all locks\n";
    }
}

int main()
{
    Account acc1(1000);
    Account acc2(1000);

    std::thread t1(transfer,
                   std::ref(acc1),
                   std::ref(acc2),
                   100);

    std::thread t2(transfer,
                   std::ref(acc2),
                   std::ref(acc1),
                   50);

    t1.join();
    t2.join();

    std::cout << "Acc1 = "
              << acc1.balance << '\n';

    std::cout << "Acc2 = "
              << acc2.balance << '\n';
}