#include <iostream>
#include <string>
#include <algorithm>

int doubling(int number);

void greet(std::string toGreet);

std::string appendAFunction(std::string toAppendTo);

int sum(int numberUntilToSum);

void factorio(int toFactorial, long long int valueToOverwrite);

void swap(int &a, int &b);

void unique(int arr[], int size);

int main(int argc, char *args[]) {


    // - Create an integer variable named `baseNum` and assign the value `123` to it
    // - Create a function called `doubling` that doubles it's input parameter and returns with an integer
    // - Print the result of `doubling(baseNum)`
    int baseNum = 123;
    std::cout << doubling(baseNum) << std::endl;

    // - Create a string variable named `al` and assign the value `Green Fox` to it
    // - Create a function called `greet` that greets it's input parameter
    // - Greeting is printing e.g. `Greetings dear, Green Fox`
    // - Greet `al`
    std::string name = "Al";
    greet(name);

    // - Create a string variable named `typo` and assign the value `Chinchill` to it
    // - Write a function called `appendAFunc` that gets a string as an input,
    //   appends an 'a' character to its end and returns with a string
    //
    // - Print the result of `appendAFunc(typo)`
    std::string typo = "Chinchill";
    std::cout << appendAFunction(typo) << std::endl;

    // Write a function called `sum` that returns the sum of numbers from zero to the given parameter
    std::cout << sum(10) << std::endl;

    // - Create a function called `factorio`
    //   it should calculate its input's factorial.
    //   it should not return it, but take an additional integer parameter and overwrite its value.
    factorio(13, 10);

    // Create two integer variables: a=15, b=23
    // Create a function named swap that gets the 2 integers as parameters and swaps its values.
    // Print the values before and after the function call and make sure the values are printed in reversed order.
    int a = 15;
    int b = 23;
    std::cout << "a = " << a << ", " << "b = " << b << std::endl;
    swap(a, b);
    std::cout << "a = " << a << ", " << "b = " << b << std::endl;

    //  Create a function that takes a list of numbers as a parameter
    //  Don't forget you have pass the size of the list as a parameter as well
    //  Returns a list of numbers where every number in the list occurs only once
    //  Example
    //  int numbers[] = {1, 11, 34, 11, 52, 61, 1, 34};
    //  std::cout << (unique(numbers)) << std::endl;
    //  should print: `[1, 11, 34, 52, 61]`
    int numbers[] = {1, 11, 34, 11, 52, 61, 1, 34};
    unique(numbers, sizeof(numbers)/sizeof(numbers[0]) + 2);

    return 0;
}


int doubling(int number) {
    int result = number * 2;

    return result;
}

void greet(std::string toGreet) {

    std::cout << "Greetings dear " << toGreet << ", Green Fox!" << std::endl;

}

std::string appendAFunction(std::string toAppendTo) {
    toAppendTo.append("a");

    return toAppendTo;
}

int sum(int numberUntilToSum) {

    int result = 0;
    for (int i = 0; i < numberUntilToSum; ++i) {
        result += i;
    }

    return result;
}

void factorio(int toFactorial, long long int valueToOverwrite) {
    long long int result = toFactorial;
    for (int i = 1; i < toFactorial; ++i) {
        result *= i;
    }
    valueToOverwrite = result;
    std::cout << valueToOverwrite << std::endl;
}

void swap(int &a, int &b) {

    std::swap(a, b);

}

void unique(int arr[], int size) {
    int s = 0;
   // int arr[] = {1, 11, 34, 11, 52, 61, 1, 34};
    int result[s];
    std::sort(arr, arr + size);
    result[0] = arr[0];
    for (int i = 1; i < size - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            result[s] = arr[i];
            s++;
        }
    }
    result[s] = arr[size - 1];
    for (int i = 0; i < s; ++i) {
        std::cout << result[i] << " ";
    }
}

