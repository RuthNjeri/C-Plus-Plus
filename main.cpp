
#include <iostream>

int main()
{
    // Integers
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
    //int i5 = d1; // The value is trancated and prints out 2 because it's an int
    int i5 = static_cast<int>(d1); // Type casting

    std::cout << "***Characters***" << std::endl;
    char c1 = 'a';
    //char c2 = "b"; a double quoted string is a char*, anything with double quotes is a string
    std::cout << "c1=" << c1 << std::endl;
    //std::cout << "c2= " << c2 << std::endl;

    std::cout << "***Boolean: 0 == false and 1 == true***" << std::endl;
    bool flag = false;
    std::cout << "flag= " << flag << std::endl;
    flag = i1;
    std::cout << "flag= " << flag << std::endl;
    flag = d1;
    std::cout << "flag= " << flag << std::endl;
    
    std::cout << "***Auto***" << std::endl;

    auto a1 = 1;
    auto a2 = 2.2;
    auto a3 = 'c';
    auto a4 = "s";
    auto a5 = true;
    auto a6 = 3L;
    auto a7 = 1'000'000'000'000; // Digit separaters ', changes nothing, can be put in or not
    auto a8 = 0XFF; // 255 in a hex literal
    auto a9 = 0b111; // 7 in a binary literal
    //a1 = a2; // conversion of double to int will lead to possible loss of data
    a1 = static_cast<int>(a2);

    std::cout << "***Char, signed, unsigned, overflow**" << std::endl;
    unsigned char n1 = 128; // range of unsigned char 0 to 255
    char n2 = 128; // ranged of signed char -128 to 127, this line will have an overflow of -128
    std::cout << "n1= " << n1 << std::endl;
    std::cout << "n2= " << n2 << std::endl;
    n1 = 254;
    n2 = 254;
    std::cout << "n1= " << n1 << std::endl;
    std::cout << "n2= " << n2 << std::endl;
    n1 = 300;
    n2 = 300;
    std::cout << "n1= " << n1 << std::endl;
    std::cout << "n2= " << n2 << std::endl;



    return 0;
}
