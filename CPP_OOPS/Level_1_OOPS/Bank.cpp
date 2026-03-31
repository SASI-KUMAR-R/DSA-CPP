#include <iostream>
#include <string>

class BankAccount
{
private:
    int balance;

public:
    BankAccount()
    {
        balance = 0;
    }

    void deposit(int amount)
    {
        if (amount <= 0) {
            std::cout << "Invalid deposit amount\n";
            return;
        }
        balance += amount;
        std::cout << "Deposit successful\n";
    }

    void withdraw(int amount)
    {
        if (amount <= 0) {
            std::cout << "Invalid withdrawal amount\n";
            return;
        }

        if (amount > balance) {
            std::cout << "Insufficient balance. Available: " << balance << "\n";
            return;
        }

        balance -= amount;
        std::cout << "Withdrawal successful\n";
    }

    void displayBalance() const
    {
        std::cout << "Balance: " << balance << std::endl;
    }
};

int main()
{
    BankAccount sasi;

    sasi.displayBalance();
    sasi.deposit(15000);
    sasi.displayBalance();
    sasi.withdraw(15001);
}