#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int doubling(int number);

void greet(std::string toGreet);

std::string appendAFunction(std::string toAppendTo);

int sum(int numberUntilToSum);

void factorio(int toFactorial, long long int valueToOverwrite);

void swap(int &a, int &b);

void unique(int arr[], int size);

std::string isAnagram(std::string wordOne, std::string wordTwo);

std::string createPalindrome(std::string text);

void searchPalindrome(std::string text);

void bubbleSort(int arr[], int size);

int main(int argc, char *args[])
{


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
    unique(numbers, sizeof(numbers) / sizeof(numbers[0]) + 2);
    std::cout << std::endl;

    // Create a function named is anagram following your current language's style guide. It should take two strings and return a boolean value depending on whether its an anagram or not.
    // Examples
    // input 1	input 2	output
    // "dog"	"god"	true
    // "green"	"fox"	false

    std::string input11 = "dog";
    std::string input12 = "god";
    std::string input21 = "green";
    std::string input22 = "fox";

    std::cout << isAnagram(input11, input12) << std::endl;
    std::cout << isAnagram(input21, input22) << std::endl;

    // Create a function named create palindrome following your current language's style guide. It should take a string, create a palindrome from it and then return it.
    // Examples
    //     input	        output
    //      ""	              ""
    //  "greenfox"	   "greenfoxxofneerg"
    //     "123"           "123321"

    std::string input1 = "";
    std::string input2 = "greenfox";
    std::string input3 = "123";

    std::cout << createPalindrome(input1) << std::endl;
    std::cout << createPalindrome(input2) << std::endl;
    std::cout << createPalindrome(input3) << std::endl;

    // Create a function named search palindrome following your current language's style guide. It should take a string, search for palindromes that at least 3 characters long and return a list with the found palindromes.
    // Examples
    //                  input	                                   output
    // "dog goat dad duck doodle never"     	["og go", "g g", " dad ", "dad", "d d", "dood", "eve"]
    //                  "apple"                                    	[]
    //                  "racecar"                       	["racecar", "aceca", "cec"]
    //                     ""	                                    []

    std::string inputText = "dog goat dad duck doodle never";
    searchPalindrome(inputText);

    int arr[5] = {1, 2, 5, 4, 3};


     bubbleSort(arr, 5);
    //for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); ++i) {
    //     std::cout << arr[i] << ", ";
    // }
    return 0;
}


int doubling(int number)
{
    int result = number * 2;

    return result;
}

void greet(std::string toGreet)
{

    std::cout << "Greetings dear " << toGreet << ", Green Fox!" << std::endl;
}

std::string appendAFunction(std::string toAppendTo)
{
    toAppendTo.append("a");

    return toAppendTo;
}

int sum(int numberUntilToSum)
{

    int result = 0;
    for (int i = 0; i < numberUntilToSum; ++i) {
        result += i;
    }

    return result;
}

void factorio(int toFactorial, long long int valueToOverwrite)
{
    long long int result = toFactorial;
    for (int i = 1; i < toFactorial; ++i) {
        result *= i;
    }
    valueToOverwrite = result;
    std::cout << valueToOverwrite << std::endl;
}

void swap(int &a, int &b)
{

    std::swap(a, b);
}

void unique(int arr[], int size)
{
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

std::string isAnagram(std::string wordOne, std::string wordTwo)
{
    std::string ifAnagram;
    std::sort(wordOne.begin(), wordOne.end());
    std::sort(wordTwo.begin(), wordTwo.end());
    if (wordOne.compare(wordTwo) == 0) {
        ifAnagram = "true";
    } else ifAnagram = "false";

    return ifAnagram;
}

std::string createPalindrome(std::string text)
{
    for (int i = text.length() - 1; i >= 0; i--) {
        text += text[i];
    }
    return text;
}

void searchPalindrome(std::string text)
{
    std::vector<std::string> palindromes;
    std::string temp = {};
    // int lengthOfTemp = 3;
    int count = 0;
    int index = 1;
    int lengthOfText = text.length();

    for (int i = 1; i < lengthOfText - 1; ++i) {
        temp = text[i];
        index = 1;
        while (text.at(i - index) == text.at(i + index)) {
            temp = text[i - index] + temp + text[i + index];
            palindromes.push_back(temp);
            index++;
        }
        temp.clear();
    }
    for (int i = 0; i < palindromes.size(); ++i) {
        std::cout << "\"" << palindromes[i] << "\",";\

    }

    std::cout << std::endl;
}

void bubbleSort(int arr[], int size)
{
   // int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            int temp;
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
        size--;
    }
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << ", ";
    }
}