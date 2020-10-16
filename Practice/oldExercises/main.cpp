#include <iostream>
#include <vector>
#include <list>

std::vector<std::string> putSaturn(std::vector<std::string> listToCorrect);

std::vector<std::string> makingMatches(const std::vector<std::string> &girls, const std::vector<std::string> &boys);

std::vector<std::string> appendA(std::vector<std::string> input);

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