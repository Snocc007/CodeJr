#include <iostream>

void divide(double number);

int main()
{
    divide(0);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}

void divide(double number)
{
    try {
        if (number == 0) {
            throw 0;
        }
        std::cout << "10 divided by " << number << " is " << 10 / number << "." << std::endl;

    } catch (...) {
        std::cout << "Division with 0 is not possible!" << std::endl;
    }
}