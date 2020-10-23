#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

void divide(double number);

void printEachLine();

int countLines();

void writeSingleLine();

bool copyFile(std::string copyFrom, std::string copyTo);

void reverseLines(std::string fileName);

void doubled(std::string fileName);

void reversedOrder(std::string fileName);

int main()
{
    // DIVIDE BY ZERO WITH EXCEPTION

    divide(0);

    std::cout << "Hello, World!" << std::endl;

    // PRINT EACH LINE

    printEachLine();

    // COUNT LINES

    std::cout << countLines() << std::endl;

    // WRITE SINGLE LINE

    writeSingleLine();

    // COPY FILE

    std::cout << copyFile("my-file.txt", "my-copied-file.txt") << std::endl;

    // REVERSE LINES

    reverseLines("reversed-lines.txt");
    std::cout << std::endl;

    // DOUBLED

    doubled("duplicated-chars.txt");
    std::cout << std::endl;

    // REVERSED ORDER

    reversedOrder("reversed-order.txt");
    std::cout << std::endl;



    return 0;
}

// DIVIDE BY ZERO WITH EXCEPTION

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

// PRINT EACH LINE

void printEachLine()
{
    std::ifstream myFile;

    try {
        myFile.open("my-text.txt");
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

// COUNT LINES

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

// WRITE SINGLE LINE

void writeSingleLine()
{
    std::ofstream myFile;

    try {
        myFile.open("my-file-to-write.txt");
        if (!myFile.is_open()) {
            throw 0;
        }
        std::string text;
        std::cout << "Give me your name: " << std::endl;
        std::getline(std::cin, text);
        myFile << text;
        myFile.close();

    } catch (int x) {
        std::cout << "Couldn't open file." << std::endl;
    }
}

// COPY FILE

bool copyFile(std::string copyFrom, std::string copyTo)
{
    std::ifstream srcFile;
    std::ofstream destFile;
    bool copied;

    try {
        srcFile.open(copyFrom);
        destFile.open(copyTo);
        if (!srcFile.is_open() || !destFile.is_open()) {
            throw 0;
        }
        std::string text;

        while (!srcFile.eof()) {
            getline(srcFile, text);
            destFile << text + "\n";
        }
        copied = true;
    } catch (int x) {
        std::cout << "Couldn't open file(s)." << std::endl;
        copied = false;
    }

    srcFile.close();
    destFile.close();

    return copied;
}

// REVERSE LINES

void reverseLines(std::string fileName)
{
    std::ifstream myFile;
    std::string text;

    myFile.open(fileName);

    try {
        if (!myFile.is_open()) {
            throw 0;
        }
        while (!myFile.eof()) {
            getline(myFile, text);
            std::reverse(text.begin(), text.end());
            std::cout << text << std::endl;
        }
    } catch (int x) {
        std::cout << "Couldn't open file" << std::endl;
    }
}

// DOUBLED

void doubled(std::string fileName)
{
    std::ifstream myFile;
    std::string line;
    std::string correctedLine;
    int lenghtOfText;

    myFile.open(fileName);

    try {
        if (!myFile.is_open()) {
            throw 0;
        }
        while (!myFile.eof()) {
            getline(myFile, line);
            lenghtOfText = line.length();
            for (int i = 0; i < lenghtOfText; ++i) {
                if (i % 2 == 0) {
                    correctedLine.push_back(line[i]);
                }
            }
            std::cout << correctedLine << std::endl;
            correctedLine.clear();
        }
    } catch (int x) {
        std::cout << "Couldn't open file" << std::endl;
    }
}

// REVERSED ORDER

void reversedOrder(std::string fileName)
{
    std::ifstream myFile;
    std::string line;
    std::vector<std::string> lines;

    myFile.open(fileName);

    try {
        if (!myFile.is_open()) {
            throw 0;
        }
        while (!myFile.eof()) {
            getline(myFile, line);
            lines.push_back(line);
        }
        std::reverse(lines.begin(), lines.end());

        for (int i = 0; i < lines.size(); ++i) {
            std::cout << lines[i] << std::endl;
        }
    } catch (int x) {
        std::cout << "Couldn't open file" << std::endl;
    }
}