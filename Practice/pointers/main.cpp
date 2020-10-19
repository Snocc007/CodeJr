#include <iostream>

int main()
{
    /*
    int number = 42;

    // prints the value stored by the variable called 'number'
    std::cout << "The value of number is: " << number << std::endl;

    // prints the memory location of the variable called 'number'
    std::cout << "The address of number is " << &number << std::endl;

    int *ptr;

    // right now our 'ptr' pointer is storing some garbage value
    std::cout << "The value of ptr is " << ptr << std::endl;

    std::cout << "The address of ptr is " << &ptr << std::endl;

    ptr = nullptr;

    // by giving it a nullptr value it will point to 0
    std::cout << "The value of ptr is " << ptr << std::endl;

    int age = 31;
    int *agePtr = nullptr;

    std::cout << "The value of age is " << age << std::endl;
    std::cout << "The memory address of age is " << &age << std::endl;

    // it should be 0 because we initialized it as a nullptr
    std::cout << "The value of agePtr is " << agePtr << std::endl;

    agePtr = &age;

    // this time it should be the memory address of the variable 'age'
    std::cout << "The value of agePtr is " << agePtr << std::endl;

    std::cout << "Hello, World!" << std::endl;
    */

    // POINTER TYPE

    // Create a pointer for each variable and print out the memory addresses of that variables
    // Print out the values of the pointers

    int a = 31;
    double b = 432.2;
    std::string name = "Bob";

    int *aPtr = &a;
    double *bPtr = &b;
    std::string *namePtr = &name;

    std::cout << "The memory address of " << a << " is " << aPtr << "." << std::endl;
    std::cout << "The memory address of " << b << " is " << bPtr << "." << std::endl;
    std::cout << "The memory address of " << name << " is " << namePtr << "." << std::endl;

    // POINTER VALUE

    // Print out the value of the variable called 'age' using a pointer
    // (you have to create the pointer first)

    int age = 31;
    int *agePtr = &age;

    std::cout << "The value of age is: " << *agePtr << "." << std::endl;

    // CHANGING VALUE

    // Change the value of the variable called 'temperature' using a pointer
    // (you have to create the pointer first)

    float temperature = 21.3;
    float *temperaturePtr = &temperature;
    *temperaturePtr = 27.6;

    std::cout << "The value of temperature is: " << *temperaturePtr << "." << std::endl;

    // ADDING

    // Add two numbers using pointers

    int A = 20;
    int B = 17;

    int *APtr = &A;
    int *BPtr = &B;

    std::cout << "The sum of the two numbers is: " << *APtr + *BPtr << "." << std::endl;

    return 0;
}
