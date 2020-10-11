#include <iostream>
#include <string>
#include <list>
#include <map>

std::string reverse(std::string str);

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
