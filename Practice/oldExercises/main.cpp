#include <iostream>
#include <vector>
#include <list>

std::vector<std::string> putSaturn(std::vector<std::string> listToCorrect);

std::vector<std::string> makingMatches(const std::vector<std::string> &girls, const std::vector<std::string> &boys);

std::vector<std::string> appendA(std::vector<std::string> input);

std::vector<std::string> filter(std::vector<std::string> list, std::vector<std::string> sweets);

std::string containsSeven(std::vector<int> input);

bool checkNums(const std::vector<int> input, const std::vector<int> checker);

int main()
{
    // Solar system

    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Uranus", "Neptune"};

    // Saturn is missing from the planetList
    // Insert it into the correct position
    // Create a method called putSaturn() which has list parameter and returns the correct list.

    // Expected output: Mercury Venus Earth Mars Jupiter Saturn Uranus Neptune
    std::vector<std::string> correctPlanets = putSaturn(planets);

    for (int i = 0; i < correctPlanets.size(); ++i) {
        std::cout << correctPlanets[i] << " ";
    }

    std::cout << std::endl;

    //Match Making

    std::vector<std::string> girls = {"Eve", "Ashley", "Claire", "Kat", "Jane"};
    std::vector<std::string> boys = {"Joe", "Fred", "Tom", "Todd", "Neef", "Jeff"};

    // Write a method that joins the two lists by matching one girl with one boy into a new list
    // If someone has no pair, he/she should be the element of the list too
    // Exepected output: "Eve", "Joe", "Ashley", "Fred"...

    std::vector<std::string> matches = makingMatches(girls, boys);

    for (int i = 0; i < matches.size(); ++i) {
        std::cout << matches[i] << " ";
    }

    std::cout << "Hello, World!" << std::endl;

    // Append letter

    std::vector<std::string> animals = {"bo", "anacond", "koal", "pand", "zebr"};

    // Create a function called "appendA()" that adds "a" to every string in the "animals" list.
    // The parameter should be a vector.

    std::vector<std::string> newAnimals = appendA(animals);

    for (int i = 0; i < newAnimals.size(); ++i) {
        std::cout << newAnimals[i] << " ";
    }

    std::cout << std::endl;

    // Candy Shop

    const std::vector<std::string> sweets = {"Cupcake", "Brownie"};
    std::vector<std::string> list = {"Cupcake", "Carrot", "Bread", "Brownie", "Lemon"};

    // Accidentally we added "Carrot", "Lemon" and "Bread" to the list.
    // Your task is to remove them from the list. "sweets" vector can help you with this
    // You should erase every element from "list" vector that is not in "sweets" vector.
    // No, don't just remove the lines
    // Create a method called filter() which takes the two lists as parameters.

    std::vector<std::string> filteredList = filter(list, sweets);

    // Expected output: Cupcake Brownie
    for (int i = 0; i < filteredList.size(); ++i) {
        std::cout << filteredList[i] << " ";
    }

    std::cout << std::endl;

    // Element finder

    const std::vector<int> numbers = {1, 2, 3, 4, 5};
    const std::vector<int> numbers2 = {6, 7, 8, 9, 10};

    // Write a method that checks if the vector contains "7" if it contains return "Hoorray" otherwise return "Noooooo"

    // Expected output: "Noooooo"
    std::cout << containsSeven(numbers) << std::endl;

    // Expected output: "Hoorray"
    std::cout << containsSeven(numbers2) << std::endl;

    // Is in list

    const std::vector<int> numbers3 = {2, 4, 6, 8, 10, 12, 14};
    const std::vector<int> numbers4 = {2, 4, 6, 8, 10, 12, 14, 16};
    const std::vector<int> checker = {4, 8, 12, 16};

    // Check if vector contains all of the following elements: 4,8,12,16
    // Create a method that accepts vector as an input
    // it should return "true" if it contains all, otherwise "false"

    // Expected output: "The first vector does not contain all the numbers"
    if (checkNums(numbers3, checker)) {
        std::cout << "The first vector contains all the numbers" << std::endl;
    } else {
        std::cout << "The first vector does not contain all the numbers" << std::endl;
    }

    // Expected output: "The second vector contains all the numbers"
    if (checkNums(numbers4, checker)) {
        std::cout << "The second vector contains all the numbers" << std::endl;
    } else {
        std::cout << "The second vector does not contain all the numbers" << std::endl;
    }


    return 0;
}

std::vector<std::string> putSaturn(std::vector<std::string> listToCorrect)
{
    std::vector<std::string>::iterator itVec;
    for (int i = 0; i < listToCorrect.size(); ++i) {
        if (listToCorrect[i] == "Uranus") {
            itVec = listToCorrect.begin() + i;
        }
    }
    listToCorrect.insert(itVec, "Saturn");

    return listToCorrect;
}

std::vector<std::string> makingMatches(const std::vector<std::string> &girls, const std::vector<std::string> &boys)
{
    std::vector<std::string> result;

    if (boys.size() > girls.size()) {
        for (int i = 0; i < boys.size(); i++) {
            if (i < girls.size()) {
                result.push_back(girls[i]);
            }
            result.push_back(boys[i]);
        }
    } else if (boys.size() < girls.size()) {
        for (int i = 0; i < girls.size(); i++) {
            if (i < boys.size()) {
                result.push_back(boys[i]);
            }
            result.push_back(girls[i]);
        }
    }

    return result;
}

std::vector<std::string> appendA(std::vector<std::string> input)
{
    for (int i = 0; i < input.size(); ++i) {
        input[i] += "a";
    }

    return input;
}

std::vector<std::string> filter(std::vector<std::string> list, const std::vector<std::string> sweets)
{
    bool ifHaveAMatch = false;
    std::string temp;

    for (int i = 0; i < list.size(); i++) {
        temp = list[i];
        ifHaveAMatch = false;
        for (int j = 0; j < sweets.size(); j++) {
            if (temp == sweets[j]) {
                ifHaveAMatch = true;
                break;
            }
        }
        if (ifHaveAMatch == false) {
            list.erase(list.begin() + i);
            i--;
        }
    }

    return list;
}

std::string containsSeven(std::vector<int> input)
{
    bool ifHave = false;
    std::string result;

    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == 7) {
            ifHave = true;
        }
    }
    if (ifHave == true) {
        result = "Hoorray";
    } else {
        result = "Noooooo";
    }

    return result;
}

bool checkNums(const std::vector<int> input, std::vector<int> checker)
{
    bool ifHaveAll = false;
    int counter = 0;
    for (int i = 0; i < input.size(); ++i) {
        for (int j = 0; j < checker.size(); ++j) {
            if (input[i] == checker[j]) {
                counter++;
            }
        }
    }

    if (counter == 4) {
        ifHaveAll = true;
    }

    return ifHaveAll;
}