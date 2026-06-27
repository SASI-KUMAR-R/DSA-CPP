#include <iostream>
#include <thread>
using namespace std;

class Base {
    public :
        void operator() (int n)
        {
            cout << n << endl ; 
        }
};

int main()
{
    int n = 5 ; 
    thread t1((Base()),n) ; 
    t1.join() ;
    return 0;
}