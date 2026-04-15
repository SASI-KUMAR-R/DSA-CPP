#include <iostream>
using namespace std;

// Void Pointer Handles Everything
void print(void *ptr, char ch)
{
    switch (ch)
    {
    case 'i':
        cout << *((int *)ptr) << endl;
        break;
    case 'c':
        cout << *((char *)ptr) << endl;
        break;
    case 'f':
        cout << *((float *)ptr) << endl;
        break;

    default:
        break;
    }
}

int main()
{
    int n = 5;
    char ch = 'X';
    print(&n, 'i');
    print(&ch, 'c');
    return 0;
}