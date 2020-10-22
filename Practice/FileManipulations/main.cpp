#include <iostream>
#include <fstream>
#include <string>

void divide(double number);

void printEachLine();

int countLines();

int main()
{
    divide(0);

    std::cout << "Hello, World!" << std::endl;

    printEachLine();

    std::cout << countLines() << std::endl;

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

        while (!myFile.eof()) {
            getline(myFile, text);
            std::cout << text << std::endl;
        }
    } catch (int x) {
        std::cout << "Couldn't open file." << std::endl;
    }

    myFile.close();
}

int countLines()
{
    std::ifstream myFile;
    int counter = 0;
    try {
        myFile.open("my-file.txt");
        if (!myFile.is_open()) {
            throw 0;
        }
        std::string text;

        while (!myFile.eof()) {
            getline(myFile, text);
            counter++;
        }
    } catch (int x) {
        counter = 0;
    }

    myFile.close();

    return counter;
}