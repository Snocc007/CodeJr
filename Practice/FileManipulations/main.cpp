#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <sstream>

void divide(double number);

void printEachLine();

int countLines();

void writeSingleLine();

bool copyFile(std::string copyFrom, std::string copyTo);

void reverseLines(std::string fileName);

void doubled(std::string fileName);

void reversedOrder(std::string fileName);

std::vector<std::string> uniqueIPs(std::string fileName);

double getPostRatio(std::string fileName);

std::string ticTacResult(std::string fileName);

void encodedLines(std::string fileName);

void mostCommonNumbers(std::string fileName);

int compareMapValues(std::pair<int, int> a, std::pair<int, int> b);

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

    //  writeSingleLine();

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

    // LOGS

    std::vector<std::string> result = uniqueIPs("log.txt");
    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i] << std::endl;

    }

    std::cout << "The GETS and POSTS ratio is: " << getPostRatio("log.txt") << std::endl;

    // TIC TAC TOE

    // Write a function that takes a filename as string,
    // open and read it. The file data represents a tic-tac-toe
    // game result. Return 'X'/'O'/'draw' based on which player
    // has winning situation.

    std::cout << ticTacResult("win-o.txt") << std::endl;
    // should print O

    std::cout << ticTacResult("win-x.txt") << std::endl;
    // should print X

    std::cout << ticTacResult("draw.txt") << std::endl;
    // should print draw

    // ENCODED LINES

    std::cout << std::endl;
    encodedLines("encoded-lines.txt");

    // LOTTERY

    mostCommonNumbers("lottery.txt");

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
    myFile.close();
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
    myFile.close();
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
    myFile.close();
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
    myFile.close();
}

// LOGS

std::vector<std::string> uniqueIPs(std::string fileName)
{
    std::ifstream myFile;
    std::vector<std::string> uniqueIPs;

    myFile.open(fileName);

    try {
        if (!myFile.is_open()) {
            throw 0;
        }
        std::vector<std::string> tempVec;
        std::string IPs;
        std::string line;
        char delimiter = '.';
        int delPos;

        while (!myFile.eof()) {
            std::getline(myFile, line);
            delPos = line.find_first_of(delimiter);
            IPs = line.substr(delPos - 2, 11);
            tempVec.push_back(IPs);
        }
        std::sort(tempVec.begin(), tempVec.end());
        for (int i = 0; i < tempVec.size(); i++) {
            if (tempVec[i] != tempVec[i + 1]) {
                uniqueIPs.push_back(tempVec[i]);
            }
        }
    } catch (int x) {
        std::cout << "Couldn't open file" << std::endl;
    }
    return uniqueIPs;
}

double getPostRatio(std::string fileName)
{

    std::ifstream myFile;
    double gets = 0;
    double posts = 0;
    myFile.open(fileName);

    try {
        if (!myFile.is_open()) {
            throw 0;
        }
        std::vector<std::string> tempVec;
        std::string line;

        char delimiter = '.';
        int delPos;

        while (!myFile.eof()) {
            std::getline(myFile, line);
            delPos = line.find_last_of(delimiter);
            if (line.substr(delPos + 6, 1) == "P") {
                posts++;
            } else if (line.substr(delPos + 6, 1) == "G") {
                gets++;
            }
        }

    } catch (int x) {
        std::cout << "Couldn't open file" << std::endl;
    }
    myFile.close();
    return gets / posts;
}

// TIC TAC TOE

std::string ticTacResult(std::string fileName)
{
    std::string result = "draw";
    std::ifstream myFile;
    myFile.open(fileName);
    char board[3][3];
    int countX = 0;
    int countO = 0;
    try {
        if (!myFile.is_open()) {
            throw 0;
        }
        // int i = 0;

        std::string row;
        std::string board;
        while (!myFile.eof()) {
            getline(myFile, row);
            board += row;
        }
        int i = 0;
        while (i <= 6) {
            if (i == 0) {
                for (int j = 0; j < 3; ++j) {
                    for (int k = j; k < 9;) {
                        if (board[i + k] == 'O') {
                            countO++;
                        } else if (board[i + k] == 'X') {
                            countX++;
                        }
                        k += 3;
                    }
                    if (countO == 3) {
                        result = "O";
                        break;
                    } else if (countX == 3) {
                        result = "X";
                        break;
                    } else {
                        countX = countO = 0;
                    }
                }
                for (int j = 0; j < 9;) {
                    if (board[i + j] == 'O') {
                        countO++;
                    } else if (board[i + j] == 'X') {
                        countX++;
                    }
                    j += 4;
                }


                if (countO == 3) {
                    result = "O";
                    break;
                } else if (countX == 3) {
                    result = "X";
                    break;
                } else {
                    countX = countO = 0;
                }
            }
            if (i % 3 == 0) {
                for (int j = 0; j < 3; j++) {
                    if (board[i + j] == 'O') {
                        countO++;
                    } else if (board[i + j] == 'X') {
                        countX++;
                    }
                }
                if (countO == 3) {
                    result = "O";
                    break;
                } else if (countX == 3) {
                    result = "X";
                    break;
                } else {
                    countX = countO = 0;
                }
            } else if (i == 2) {
                for (int j = i; j < 7;) {
                    if (board[j] == 'O') {
                        countO++;
                    } else if (board[j] == 'X') {
                        countX++;
                    }
                    j += 2;
                }
                if (countO == 3) {
                    result = "O";
                    break;
                } else if (countX == 3) {
                    result = "X";
                    break;
                } else {
                    countX = countO = 0;
                }
            } else if (i == 0) {
                for (int j = i; j < 7;) {
                    if (board[j] == 'O') {
                        countO++;
                    } else if (board[j] == 'X') {
                        countX++;
                    }
                    j += 4;
                }
                if (countO == 3) {
                    result = "O";
                    break;
                } else if (countX == 3) {
                    result = "X";
                    break;
                } else {
                    countX = countO = 0;
                }
            }
            i++;
        }

    }

    catch (int
           x) {
        std::cout << "Couldn't open file" << std::endl;
    }
    myFile.close();
    return result;
}

// ENCODED LINES

void encodedLines(std::string fileName)
{
    std::ifstream myFile;
    std::string line;
    int characterAscii;
    myFile.open(fileName);
    try {
        if (!myFile.is_open()) {
            throw 0;
        }
        while (!myFile.eof()) {
            getline(myFile, line);
            for (int i = 0; i < line.length(); ++i) {
                characterAscii = line[i];
                line[i] = characterAscii - 1;
            }
            std::cout << line << std::endl;
        }
    }
    catch (int x) {
        std::cout << "Couldn't open file." << std::endl;
    }
    myFile.close();
}

// LOTTERY

void mostCommonNumbers(std::string fileName)
{
    std::ifstream myFile;
    std::string numbers;
    std::string line;
    std::string temp;

    std::vector<int> intVec;
    // std::vector<std::string> strVec;
    std::map<int, int> winningNumbers;
    std::map<int, int>::iterator itMap;

    myFile.open(fileName);
    try {
        if (!myFile.is_open()) {
            throw 0;
        }
        while (!myFile.eof()) {
            getline(myFile, line);
            numbers = line.substr(line.find_last_of("Ft") + 2, 14);
            std::stringstream ss(numbers);
            while (ss) {
                std::getline(ss, temp, ';');
                intVec.push_back(std::stoi(temp));
            }
            intVec.pop_back();

            ss.str("");

            for (int i = 0; i < intVec.size(); ++i) {
                itMap = winningNumbers.find(intVec[i]);
                if (itMap != winningNumbers.end()) {
                    itMap->second++;
                }
                winningNumbers.emplace(intVec[i], 0).first;
            }
            intVec.clear();
        }

        for (auto it = winningNumbers.begin(); it != winningNumbers.end(); it++) {
            std::cout << it->first << " - " << it->second << std::endl;
        }
        std::vector<std::pair<int, int>> tempVectorForMap(winningNumbers.begin(), winningNumbers.end());
        std::sort(tempVectorForMap.begin(), tempVectorForMap.end(), compareMapValues);
        std::cout << "The 5 most common lottery numbers are: " <<
                  tempVectorForMap[tempVectorForMap.size() - 1].first << ", " <<
                  tempVectorForMap[tempVectorForMap.size() - 2].first << ", " <<
                  tempVectorForMap[tempVectorForMap.size() - 3].first << ", " <<
                  tempVectorForMap[tempVectorForMap.size() - 4].first << " and " <<
                  tempVectorForMap[tempVectorForMap.size() - 5].first << "." << std::endl;
    }

    catch (int x) {
        std::cout << "Couldn't open file." << std::endl;
    }
    myFile.close();

}

int compareMapValues(std::pair<int, int> a, std::pair<int, int> b)
{
    return a.second < b.second;
}