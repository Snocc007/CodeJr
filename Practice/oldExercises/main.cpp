#include <iostream>
#include <vector>
#include <list>
#include <map>

std::vector<std::string> putSaturn(std::vector<std::string> listToCorrect);

std::vector<std::string> makingMatches(const std::vector<std::string> &girls, const std::vector<std::string> &boys);

std::vector<std::string> appendA(std::vector<std::string> input);

std::vector<std::string> filter(std::vector<std::string> list, std::vector<std::string> sweets);

std::string containsSeven(std::vector<int> input);

bool checkNums(const std::vector<int> input, const std::vector<int> checker);

std::vector<std::string> quoteSwap(std::vector<std::string> &input);

std::vector<std::string>
getChildrenWithMoreThanFourCandies(const std::vector<std::pair<std::string, std::map<std::string, int>>> &students);

int sumOfAgeWithLessThanFiveCandies(const std::vector<std::pair<std::string, std::map<std::string, int>>> &students);

int main()
{
    // SOLAR SYSTEM

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

    //MATCH MAKING

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

    // APPEND LETTER

    std::vector<std::string> animals = {"bo", "anacond", "koal", "pand", "zebr"};

    // Create a function called "appendA()" that adds "a" to every string in the "animals" list.
    // The parameter should be a vector.

    std::vector<std::string> newAnimals = appendA(animals);

    for (int i = 0; i < newAnimals.size(); ++i) {
        std::cout << newAnimals[i] << " ";
    }

    std::cout << std::endl;

    // CANDY SHOP

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

    // ELEMENT FINDER

    const std::vector<int> numbers = {1, 2, 3, 4, 5};
    const std::vector<int> numbers2 = {6, 7, 8, 9, 10};

    // Write a method that checks if the vector contains "7" if it contains return "Hoorray" otherwise return "Noooooo"

    // Expected output: "Noooooo"
    std::cout << containsSeven(numbers) << std::endl;

    // Expected output: "Hoorray"
    std::cout << containsSeven(numbers2) << std::endl;

    // IS IN LIST

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

    // QUOTE SWAP

    std::vector<std::string> quote = {"What", "I", "do", "create,", "I", "cannot", "not", "understand."};

    // Accidentally I messed up this quote from Richard Feynman.
    // Two words are out of place
    // Your task is to fix it by swapping the right words with code
    // Create a method called quoteSwap().

    quoteSwap(quote);

    // Also, print the sentence to the output with spaces in between.

    for (int i = 0; i < quote.size(); ++i) {
        if (i < quote.size()) {
            std::cout << quote[i] << " ";
        } else {
            std::cout << quote[i] << "." << std::endl;
        }
    }

    std::cout << std::endl;

    // HE WILL NEVER

    std::string out = "";
    std::vector<int> notSoCrypticMessage = {1, 12, 1, 2, 11, 1, 7, 11, 1, 49, 1, 3, 11, 1, 50, 11};

    std::map<int, std::string> map;

    map[7] = "run around and desert you";
    map[50] = "tell a lie and hurt you ";
    map[49] = "make you cry, ";
    map[2] = "let you down";
    map[12] = "give you up, ";
    map[1] = "Never gonna ";
    map[11] = "\n";
    map[3] = "say goodbye ";

    // Things are a little bit messed up
    // Your job is to decode the notSoCrypticMessage by using the map as a look up table
    // Assemble the fragments into the out variable

    std::map<int, std::string>::iterator itMap;

    for (int i = 0; i < notSoCrypticMessage.size(); ++i) {
        itMap = map.find(notSoCrypticMessage[i]);
        out += itMap->second;
    }

    std::cout << out << std::endl;

    // STUDENT COUNTER

    std::vector<std::pair<std::string, std::map<std::string, int>>> students;

    std::map<std::string, int> TheodorData;
    TheodorData.insert(std::make_pair("age", 9));
    TheodorData.insert(std::make_pair("candies", 2));
    students.push_back(std::make_pair("Theodor", TheodorData));

    std::map<std::string, int> PaulData;
    PaulData.insert(std::make_pair("age", 10));
    PaulData.insert(std::make_pair("candies", 1));
    students.push_back(std::make_pair("Paul", PaulData));

    std::map<std::string, int> MarkData;
    MarkData.insert(std::make_pair("age", 7));
    MarkData.insert(std::make_pair("candies", 3));
    students.push_back(std::make_pair("Mark", MarkData));

    std::map<std::string, int> PeterData;
    PeterData.insert(std::make_pair("age", 12));
    PeterData.insert(std::make_pair("candies", 5));
    students.push_back(std::make_pair("Peter", PeterData));

    std::map<std::string, int> OlafData;
    OlafData.insert(std::make_pair("age", 12));
    OlafData.insert(std::make_pair("candies", 7));
    students.push_back(std::make_pair("Olaf", OlafData));

    std::map<std::string, int> GeorgeData;
    GeorgeData.insert(std::make_pair("age", 3));
    GeorgeData.insert(std::make_pair("candies", 2));
    students.push_back(std::make_pair("George", GeorgeData));

    // Display the following things:
    //  - The names of students who have more than 4 candies
    //  - The sum of the age of children who have less than 5 candies

    std::cout << "Children with more than 4 candies: ";

    std::vector<std::string> childrenWithManyCandies = getChildrenWithMoreThanFourCandies(students);

    for (int i = 0; i < childrenWithManyCandies.size(); ++i) {
        std::cout << childrenWithManyCandies[i] << " ";
    }

    std::cout << std::endl;
    std::cout << "Sum of those who have less than 5 candies: " << sumOfAgeWithLessThanFiveCandies(students)
              << std::endl;


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

std::vector<std::string> quoteSwap(std::vector<std::string> &input)
{
    std::string temp = "cannot";
    for (int i = 0; i < input.size(); ++i) {

        if (input[i] == "do") {
            input[i] = temp;
            temp = "do";
            i++;
        }
        if (input[i] == "cannot") {
            input[i] = temp;
        }
    }

    return input;
}

std::vector<std::string> getChildrenWithMoreThanFourCandies
        (const std::vector<std::pair<std::string, std::map<std::string, int>>> &students)
{
    std::vector<std::string> result;

    for (int i = 0; i < students.size(); i++) {
        for (auto itStudents = students[i].second.begin(); itStudents != students[i].second.end(); itStudents++) {
            itStudents = students[i].second.find("candies");
            if (itStudents->second > 4) {
                result.push_back(students[i].first);
            }
        }
    }
    return result;
}

int sumOfAgeWithLessThanFiveCandies(const std::vector<std::pair<std::string, std::map<std::string, int>>> &students)
{
    int result = 0;

    for (int i = 0; i < students.size(); i++) {
        for (auto itStudents = students[i].second.begin(); itStudents != students[i].second.end(); itStudents++) {
            itStudents = students[i].second.find("candies");
            if (itStudents->second < 5) {
                auto itStudents2 = students[i].second.find("age");
                result += itStudents2->second;
            }
        }
    }
    return result;
}