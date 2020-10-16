#include <iostream>
#include <vector>
#include <list>

std::vector<std::string> putSaturn(std::vector<std::string> listToCorrect);

int main()
{
    // Solar system

    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Uranus", "Neptune"};

    // Saturn is missing from the planetList
    // Insert it into the correct position
    // Create a method called putSaturn() which has list parameter and returns the correct list.

    // Expected output: Mercury Venus Earth Mars Jupiter Saturn Uranus Neptune
    std::vector<std::string> correctPlanets = putSaturn(planets);

    for (int i = 0; i < correctPlanets.size() - 1; ++i) {
        std::cout << correctPlanets[i] << " ";
    }

    std::cout << std::endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}

std::vector<std::string> putSaturn(std::vector<std::string> listToCorrect)
{
    std::vector<std::string>::iterator itVec;
    for (int i = 0; i < listToCorrect.size() - 1; ++i) {
        if (listToCorrect[i] == "Uranus") {
            itVec = listToCorrect.begin() + i;
        }
    }
    listToCorrect.insert(itVec, "Saturn");

    return listToCorrect;
}