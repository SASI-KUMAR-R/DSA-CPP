#include <iostream>

bool check(std::string str, int i, int j);

int main()
{
    std::string str = "n";
    int n = str.size();

    if(check(str,0,n-1))
        std::cout << "Palindrome";
    else
        std::cout << "Not Palindrome";
}

bool check(std::string str, int i, int j)
{
    if(i >= j) return true;      // base case

    if(str[i] != str[j])
        return false;

    return check(str,i+1,j-1);   // recursive call
}