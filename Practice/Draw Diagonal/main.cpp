#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    int a;
    std::cout << "Give me a number (integer): " << std::endl;
    std::cin >> a;
    while (a < 3) {
        std::cout << "The number must be higher." << std::endl;
        std::cout << "Give me another number (integer): " << std::endl;
        std::cin >> a;
    }
    for (int i = 1; i <= a; ++i) {
        if (i == 1 or i == a) {
            for (int j = 0; j < a; ++j) {
                std::cout << "%";
            }
        } else {
            std::cout << "%";
            for (int j = 1; j < a; ++j) {
                if (j == i) {
                    std::cout << "%";
                } else {
                    std::cout << " ";
                }
            }
        }
        std::cout << "%";

        std::cout << std::endl;

    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
