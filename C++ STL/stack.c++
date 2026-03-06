#include <iostream>
#include <stack>

int main()
{
    std::stack<int> st ;

    st.push(10) ; 
    st.push(20) ; 
    st.push(30) ; 

    st.pop() ; 

    std:: cout << st.top() ; 

    std:: cout << st.size() ; 

    std:: cout << st.empty() ; 
}