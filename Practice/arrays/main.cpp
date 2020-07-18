#include <iostream>
#include <string>

int main(int argc, char *args[]) {

    // - Create an array variable named `numbers`
    //   with the following content: `[4, 5, 6, 7]`
    // - Print the third element of `numbers`

    int numbers[] = {4, 5, 6, 7};
    int lenghtOfArray = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < lenghtOfArray; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // - Create an array variable named `firstArrayOfNumbers`
    //   with the following content: `[1, 2, 3]`
    // - Create an array variable named `secondArrayOfNumbers`
    //   with the following content: `[4, 5]`
    // - Print "secondArrayOfNumbers is longer" if `secondArrayOfNumbers` has
    //   more elements than `firstArrayOfNumbers`

    int firstArrayOfNumbers[] = {1, 2, 3};
    int secondArrayOfNumbers[] = {4, 5};
    int lenghtOfFirstArray = sizeof(firstArrayOfNumbers) / sizeof(firstArrayOfNumbers[0]);
    int lenghtOfSecondArray = sizeof(secondArrayOfNumbers) / sizeof(secondArrayOfNumbers[0]);

    if (lenghtOfFirstArray < lenghtOfSecondArray) {
        std::cout << "secondArrayOfNumbers is longer" << std::endl;
    } else {
        std::cout << "firstArrayOfNumbers is longer" << std::endl;
    }

    // - Create an array variable named `numbers`
    //   with the following content: `[54, 23, 66, 12]`
    // - Print the sum of the second and he third element

    int otherNumbers[] = {54, 23, 66, 12};
    int lenghtOfOtherNumbers = sizeof(otherNumbers) / sizeof(otherNumbers[0]);
    int sumOfOtherNumbers = 0;
    for (int i = 0; i < lenghtOfOtherNumbers; ++i) {
        sumOfOtherNumbers += otherNumbers[i];
    }
    std::cout << sumOfOtherNumbers << std::endl;

    // - Create an array variable named `numbers`
    //   with the following content: `[1, 2, 3, 8, 5, 6]`
    // - Change the 8 to 4
    // - Print the fourth element

    int anotherNumbers[] = {1, 2, 3, 8, 5, 6};
    anotherNumbers[3] = 4;
    std::cout << anotherNumbers[3] << std::endl;

    // - Create an array variable named `numbers`
    //    with the following content: `[1, 2, 3, 4, 5]`
    // - Increment the third element
    // - Print the third element

    int againSomeNumbers[] = {1, 2, 3, 4, 5};
    againSomeNumbers[2] += 1;
    std::cout << againSomeNumbers[3] << std::endl;

    int a;
    a = 4;
    int matrix[a][a];
    for (int i = 0; i < sizeof(matrix) / sizeof(matrix[0]); ++i) {
        for (int j = 0; j < sizeof(matrix[0]) / sizeof(matrix[0][0]); ++j) {
            if (i == j) {
                matrix[i][j] = 1;
            } else {
                matrix[i][j] = 0;
            }
            std::cout << matrix[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    // - Create an array variable named `animals`
    //   with the following content: `["koal", "pand", "zebr"]`
    // - Add all elements an `"a"` at the end

    std::string animals[] = {"koal", "pand", "zebr"};
    const char toAdd[] = "a";
    for (int i = 0; i < sizeof(animals) / sizeof(animals[0]); ++i) {
        animals[i].append(toAdd);
        std::cout << animals[i] << std::endl;
    }
    std::cout << std::endl;

    // - Create an array variable named `orders`
    //   with the following content: `["first", "second", "third"]`
    // - Swap the first and the third element of `orders`

    std::string orders[] = {"first", "second", "third"};
    orders[0].swap(orders[2]);
    for (int i = 0; i < sizeof(orders) / sizeof(orders[0]); ++i) {
        std::cout << orders[i] << std::endl;
    }
    std::cout << std::endl;

    // - Create an array variable named `numbers`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Reverse the order of the elements in `numbers`
    // - Print the elements of the reversed `numbers`

    int theLastNumbers[] = {3, 4, 5, 6, 7};
    for (int i = sizeof(theLastNumbers) / sizeof(theLastNumbers[0]) - 1; i >= 0; i--) {
        std::cout << theLastNumbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}