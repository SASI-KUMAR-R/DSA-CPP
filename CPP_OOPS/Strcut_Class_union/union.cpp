#include <iostream>


// only one member at a time 
// default -> public 
union test
{
    int x ;
    float y ; 
    double z ; 
};


int main()
{
    test t ; 
    t.x = 10 ;
    t.y = 15.9f ; 
    t.z = 123124.123123 ;

    std::cout << t.x << " " << t.y << " " << t.z << " " ;
    return 0;
}