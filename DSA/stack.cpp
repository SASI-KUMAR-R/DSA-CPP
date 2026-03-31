#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    stack <int> st ; 
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);

    while(!st.empty())
    {
        cout << st.top() << endl ; 
        st.pop();
    }

}
