#include <iostream>
#include <list>
#include <map>

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

    return 0;
}
