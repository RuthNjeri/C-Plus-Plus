
#include <iostream>

int main()
{
    int i1 = 1;
    std::cout << "i1= " << i1 << std::endl;

    int i2;
    i2 = 2;
    std::cout << "i2= " << i2 << std::endl;

    int i3(3);
    std::cout << "i3= " << i3 << std::endl;

    int i4{ 4 }; // Suitable for multiple assignments
    std::cout << "i4= " << i4 << std::endl;
    

    // Doubles
    std::cout << "***DOUBLES***" << std::endl;
    double d1 = 2.2;
    double d2 = i1; // integer assigned to a double because a double is more precise than an int, there is no loss of precision
    int i5 = d1; // The value is trancated and prints out 2 because it's an int


    
    return 0;
}
