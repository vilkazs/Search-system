#include <iostream>

std::string name;

int main()
{
    std::cout << "What is your name?" << std::endl;
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;
}