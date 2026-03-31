#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    queue<int> st ; 
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);

    cout << st.front() << endl;
    cout << st.back() << endl;  

}
