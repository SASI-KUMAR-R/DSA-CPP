#include <iostream>
#include <thread>
using namespace std;

class Base {
    public :
        static void run(int n)
        {
            cout << n << endl ; 
        }
};

int main()
{
    int n = 5 ; 
    thread t1(&Base::run,n) ; 
    t1.join() ;
    return 0;
}