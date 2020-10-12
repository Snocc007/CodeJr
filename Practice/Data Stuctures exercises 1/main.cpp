#include <iostream>
#include <list>

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

    //
    return 0;
}
