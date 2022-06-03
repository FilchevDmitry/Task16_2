#include <iostream>
#include<string>
#include<sstream>
int main()
{   
    std::stringstream number;
    std::string num1;
    std::string num2;
    std::cout << "Enter the integer part of the number : ";
    std::cin >> num1;
    std::cout << "Enter the fractional part of the number : ";
    std::cin >> num2;
    number << num1 << "." << num2;
    double a = std::stod(number.str());
    std::cout <<"The resulting number " << a << std::endl;

}
