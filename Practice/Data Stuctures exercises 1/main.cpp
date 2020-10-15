#include <iostream>
#include <list>
#include <map>
#include <vector>

int compareMapValues(std::pair<std::string, int> a, std::pair<std::string, int> b);

int main()
{
    // PERSONAL FINANCE

    std::list<int> expenses = {500, 1000, 1250, 175, 800, 120};
    std::list<int>::iterator itExpenses;
    expenses.sort();
    int totalExpense;
    for (itExpenses = expenses.begin(); itExpenses != expenses.end(); itExpenses++) {
        totalExpense += *itExpenses;
    }
    std::cout << "We've spent " << totalExpense << " in total." << std::endl;
    std::cout << "Our greatest expense was: " << expenses.back() << "." << std::endl;
    std::cout << "Our cheapest spending was: " << expenses.front() << "." << std::endl;

    int averageSpending = totalExpense / expenses.size();

    std::cout << "The average amount of our spendings is: "
              << averageSpending << "." << std::endl;

    std::cout << "Hello, World!" << std::endl;

    // TELEPHONE BOOK

    std::map<std::string, std::string> telephoneBook;

    telephoneBook["William A. Lathan"] = "405-709-1865";
    telephoneBook["John K. Miller"] = "402-247-8568";
    telephoneBook["Hortensia E. Foster"] = "606-481-6467";
    telephoneBook["Amanda D. Newland"] = "319-243-5613";
    telephoneBook["Brooke P. Askew"] = "307-687-2982";

    std::map<std::string, std::string>::iterator itPhoneBook;
    itPhoneBook = telephoneBook.find("John K. Miller");
    std::cout << "The telephone number of 'John K. Miller' is: " << itPhoneBook->second
              << "." << std::endl;

    for (itPhoneBook = telephoneBook.begin(); itPhoneBook != telephoneBook.end(); itPhoneBook++) {
        if (itPhoneBook->second == "307-687-2982") {
            std::cout << "You can reach " << itPhoneBook->first << " on number '307-687-2982'." << std::endl;
        }
    }
    itPhoneBook = telephoneBook.find("Chris E. Myers");

    if (itPhoneBook != telephoneBook.end()) {
        std::cout << "Chris E. Myers' telephone number is: " << itPhoneBook->second << "." << std::endl;
    } else {
        std::cout << "We don't have Chris E. Myers' telephone number." << std::endl;
    }

    // SHOPPING LIST

    std::list<std::string> shoppingList = {"eggs", "milk", "fish", "apples", "bread", "chicken"};
    std::list<std::string>::iterator itShoppingList;
    bool ifHave = false;
    for (itShoppingList = shoppingList.begin(); itShoppingList != shoppingList.end(); itShoppingList++) {
        if (*itShoppingList == "milk") {
            ifHave = true;
        }
    }
    if (ifHave == true) {
        std::cout << "We have milk on the shopping list." << std::endl;
    } else {
        std::cout << "We don't have milk on the shopping list." << std::endl;
    }

    ifHave = false;
    for (itShoppingList = shoppingList.begin(); itShoppingList != shoppingList.end(); itShoppingList++) {
        if (*itShoppingList == "bananas") {
            ifHave = true;
        }
    }
    if (ifHave == true) {
        std::cout << "We have bananas on the shopping list." << std::endl;
    } else {
        std::cout << "We don't have bananas on the shopping list." << std::endl;
    }

    // PRODUCT DATABASE

    std::map<std::string, int> productDatabase;

    productDatabase["Eggs"] = 200;
    productDatabase["Milk"] = 200;
    productDatabase["Fish"] = 400;
    productDatabase["Apples"] = 150;
    productDatabase["Bread"] = 50;
    productDatabase["Chicken"] = 550;

    std::map<std::string, int>::iterator itProductDatabase;

    itProductDatabase = productDatabase.find("Fish");
    std::cout << "The price of the fish is " << itProductDatabase->second << "." << std::endl;

    std::vector<std::pair<std::string, int>> tempVectorForMap(productDatabase.begin(), productDatabase.end());
    std::sort(tempVectorForMap.begin(), tempVectorForMap.end(), compareMapValues);
    std::cout << "The most expensive product is " << tempVectorForMap[tempVectorForMap.size() - 1].first
              << "." << std::endl;

    int totalCost = 0;
    for (itProductDatabase = productDatabase.begin();
         itProductDatabase != productDatabase.end(); itProductDatabase++) {
        totalCost += itProductDatabase->second;
    }
    std::cout << "The average price of the products is: " << totalCost / productDatabase.size() << "." << std::endl;

    std::cout << "The products cheaper than 300 are: " << std::endl;
    for (itProductDatabase = productDatabase.begin();
         itProductDatabase != productDatabase.end(); itProductDatabase++) {
        if (itProductDatabase->second < 300) {
            std::cout << itProductDatabase->first << std::endl;
        }
    }
    bool is125 = false;
    tempVectorForMap.clear();
    itProductDatabase = productDatabase.begin();
    for (itProductDatabase = productDatabase.begin(); itProductDatabase != productDatabase.end();
         itProductDatabase++) {
        if (itProductDatabase->second == 125) {
            tempVectorForMap.push_back(*itProductDatabase);
            is125 = true;
        }
    }
    if (is125) {
        std::cout << "The product(s) available for exactly 125 is(are): " << std::endl;
        for (int i = 0; i < tempVectorForMap.size(); i++) {
            std::cout << tempVectorForMap[i].first << std::endl;
        }

    } else {
        std::cout << "There's nothing available for exactly 125." << std::endl;
    }
    tempVectorForMap.clear();
    for (itProductDatabase = productDatabase.begin(); itProductDatabase != productDatabase.end();
         itProductDatabase++) {
        tempVectorForMap.push_back(*itProductDatabase);
    }
    std::sort(tempVectorForMap.begin(), tempVectorForMap.end(), compareMapValues);
    std::cout << "The cheapest product is " << tempVectorForMap[0].first
              << "." << std::endl;

    std::cout << "The products cheaper than 201 are: " << std::endl;
    for (itProductDatabase = productDatabase.begin();
         itProductDatabase != productDatabase.end(); itProductDatabase++) {
        if (itProductDatabase->second < 201) {
            std::cout << itProductDatabase->first << std::endl;
        }
    }

    std::cout << "The products more expensive than 150 are: " << std::endl;
    for (itProductDatabase = productDatabase.begin();
         itProductDatabase != productDatabase.end(); itProductDatabase++) {
        if (itProductDatabase->second > 150) {
            std::cout << itProductDatabase->first << std::endl;
        }
    }

    return 0;
}

int compareMapValues(std::pair<std::string, int> a, std::pair<std::string, int> b)
{
    return a.second < b.second;
}