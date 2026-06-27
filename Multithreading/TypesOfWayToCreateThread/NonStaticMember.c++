#include <iostream>
#include <thread>
using namespace std;

class Base {
    public :
        void run(int n)
        {
            cout << n << endl ; 
        }
};

int main()
{
    int n = 5 ; 
    Base b ; 
    thread t1(&Base::run,&b,n) ; 
    t1.join() ;
    return 0;
}