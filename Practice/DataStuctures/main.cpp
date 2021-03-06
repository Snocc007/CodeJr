#include <iostream>
#include <string>
#include <list>
#include <map>
#include <vector>

std::string reverse(std::string str);

int cmp(std::pair<std::string, std::string> a, std::pair<std::string, std::string> b);

int main()
{
    std::string example("In a dishwasher far far away");
    // example.replace("dishwasher", "galaxy");
    // I would like to replace "dishwasher" with "galaxy" in this example, but it has a problem.
    // Please fix it for me!
    // Expected output: In a galaxy far far away

    example.replace(5, 10, "galaxy");

    std::cout << example << std::endl;

    std::string url("https//www.reddit.com/r/nevertellmethebots");

    // Accidentally I got the wrong URL for a funny subreddit. It's probably "odds" and not "bots"
    // Also, the URL is missing a crucial component, find out what it is and insert it too!

    url.insert(5, ":");
    url.replace(url.length() - 4, 4, "odds");

    std::cout << url << std::endl;

    std::string quote("Hofstadter's Law: It you expect, even when you take into account Hofstadter's Law.");

    // When saving this quote a disk error has occured. Please fix it.
    // Add "always takes longer than" to the quote between the words "It" and "you" using the replace function

    quote.insert(quote.find("It") + 2, " always takes longer than");

    std::cout << quote << std::endl;

    std::string todoText = " - Buy milk\n";

    // Add "My todo:" to the beginning of the todoText
    // Add " - Download games" to the end of the todoText
    // Add " - Diablo" to the end of the todoText but with indentation

    // Expected output:

    // My todo:
    //  - Buy milk
    //  - Download games
    //      - Diablo

    todoText.insert(0, "My todo:\n");
    todoText.append(" - Download games\n");
    todoText.append(4, ' ');
    todoText.append(" - Diablo\n");
    std::cout << todoText << std::endl;

    std::string toBeReversed = ".eslaf eb t'ndluow ecnetnes siht ,dehctiws erew eslaf dna eurt fo sgninaem eht fI";

    // Create a method that can reverse an std:string, which is passed as the parameter
    // Use it on this reversed string to check it!
    // Try to solve this using .at() first, and optionally anything else after.
    // Hint: You might use a temporary variable to swap 2 characters or you can use std::swap function.


    std::cout << reverse(toBeReversed) << std::endl;

    std::list<std::string> names;
    std::cout << names.size() << std::endl;
    names.push_back("William");
    std::cout << names.empty() << std::endl;
    names.push_back("John");
    names.push_back("Amanda");
    for (auto &elm: names) {
        std::cout << elm << std::endl;

    }

    std::cout << std::endl;

    std::list<std::string>::iterator it;
    for (it = names.begin(); it != names.end(); it++) {
        int index = std::distance(names.begin(), it);
        std::cout << index + 1 << ". ";
        std::cout << *it << std::endl;

    }


    std::advance(it, 2);
    names.erase(it);

    std::cout << std::endl;

    names.reverse();
    for (it = names.begin(); it != names.end(); it++) {
        std::cout << *it << std::endl;
    }

    names.clear();
    std::cout << std::endl;

    std::map<int, std::string> myMap;
    std::cout << std::boolalpha;
    std::cout << myMap.empty();

    myMap[97] = "a";
    myMap[98] = "b";
    myMap[99] = "c";
    myMap[65] = "A";
    myMap[66] = "B";
    myMap[67] = "C";

    std::map<int, std::string>::iterator itMap = myMap.begin();

    for (auto itMap = myMap.begin(); itMap != myMap.end(); itMap++) {
        std::cout << itMap->first << "-" << itMap->second << std::endl;
    }

    myMap[68] = "D";

    std::cout << std::endl;
    std::cout << myMap.size() << std::endl;
    std::cout << myMap[99] << std::endl;
    myMap.erase(97);
    //std::cout << myMap.at(100) << std::endl;
    itMap = myMap.find(100);

    if (itMap != myMap.end()) {
        std::cout << "key '100' exists" << std::endl;
    } else {
        std::cout << "key '100' does not exist" << std::endl;
    }

    std::list<std::string> ListA = {"Apple", "Avocado", "Blueberries", "Durian", "Lychee"};
    std::list<std::string> ListB = ListA;
    std::string myVar = "Durian";
    bool isThere = (std::find(ListA.begin(), ListA.end(), myVar) != ListA.end());
    if (isThere == true) {
        std::cout << myVar << " is in ListA." << std::endl;
    } else {
        std::cout << myVar << " is not in ListA." << std::endl;
    }
    std::list<std::string>::iterator itListA;
    itListA = ListA.begin();
    std::advance(itListA, 4);
    ListA.insert(itListA, "Kiwifruit");

    if (ListA.size() > ListB.size()) {
        std::cout << "ListA contains more elements." << std::endl;
    } else if (ListA.size() < ListB.size()) {
        std::cout << "ListB contains more elements." << std::endl;
    } else {
        std::cout << "The two lists have the same nubmer of elements." << std::endl;
    }

    itListA = std::find(ListA.begin(), ListA.end(), "Avocado");
    int indexListA = std::distance(ListA.begin(), itListA);
    std::cout << indexListA << std::endl;

    itListA = std::find(ListB.begin(), ListB.end(), "Durian");
    indexListA = std::distance(ListB.begin(), itListA);
    std::cout << indexListA << std::endl;
    itListA = ListA.begin();
    std::advance(itListA, 3);
    std::cout << *itListA << std::endl;

    std::list<std::string> tempList;
    tempList.push_back("Passion Fruit");
    tempList.push_back("Pomelo");
    ListB.splice(ListB.end(), tempList);

    std::map<std::string, std::string> myBookMap;

    myBookMap["978-1-60309-452-8"] = "A letter to Jo";
    myBookMap["978-1-60309-459-7"] = "Lupus";
    myBookMap["978-1-60309-444-3"] = "Red Panda and Moon Bear";
    myBookMap["978-1-60309-461-0"] = "The Lab";


    std::map<std::string, std::string>::iterator itBook;

    std::vector<std::pair<std::string, std::string>> vectorTemp(myBookMap.begin(), myBookMap.end());
    std::sort(vectorTemp.begin(), vectorTemp.end(), cmp);

    for (int i = 0; i < vectorTemp.size(); ++i) {
        std::cout << vectorTemp[i].second << " (ISBN: " << vectorTemp[i].first << ")" << std::endl;
    }

    for (itBook = myBookMap.begin(); itBook != myBookMap.end(); itBook++) {
        if (itBook->first == "978-1-60309-444-3") {
            myBookMap.erase(itBook);
        }
        if (itBook->second == "The Lab") {
            myBookMap.erase(itBook);
        }
    }

    myBookMap["978-1-60309-450-4"] = "They Called Us Enemy";
    myBookMap["978-1-60309-453-5"] = "Why Did We Trust Him?";

    itBook = myBookMap.find("478-0-61159-424-8");

    if (itBook != myBookMap.end()) {
        std::cout << "The value associated with key '478-0-61159-424-8' is: " << itBook->second << std::endl;
    } else {
        std::cout << "There is no value associated with key '478-0-61159-424-8'." << std::endl;
    }

    itBook = myBookMap.find("978-1-60309-453-5");

    if (itBook != myBookMap.end()) {
        std::cout << "The value associated with key '978-1-60309-453-5' is: '"
                  << itBook->second << "'." << std::endl;
    } else {
        std::cout << "There is no value associated with key '978-1-60309-453-5'." << std::endl;
    }

    return 0;
}

std::string reverse(std::string str)
{
    // char temp;
    // int n = str.length() - 1;
    for (int i = 0; i < str.length() / 2; ++i) {
        std::swap(str.at(i), str.at(str.length() - 1 - i));
        // temp = str.at(i);
        // str.at(i) = str.at(n);
        // str.at(n) = temp;
        // n--;
    }
    return str;
}

int cmp(std::pair<std::string, std::string> a, std::pair<std::string, std::string> b)
{
    return a.second < b.second;
}
