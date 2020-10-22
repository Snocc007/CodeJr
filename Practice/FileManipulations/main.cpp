#include <iostream>
#include <fstream>
#include <string>

void divide(double number);

void printEachLine();

int main()
{
    divide(0);

    std::cout << "Hello, World!" << std::endl;

    printEachLine();

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

void printEachLine()
{
    std::ifstream myFile;

    try {
        myFile.open("my-file.txt");
        if (!myFile.is_open()) {
            throw 0;
        }
        std::string text;

        while (myFile) {
            getline(myFile, text);
            std::cout << text << std::endl;
        }
    } catch (int x) {
        std::cout << "Couldn't open file." << std::endl;
    }

    myFile.close();
}