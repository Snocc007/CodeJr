#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << 9 / 2 << std::endl;
    // draw a pyramid

    int a;
    std::cout << "Give me a number (integer): " << std::endl;
    std::cin >> a;
    while (a < 3) {
        std::cout << "The number must be higher." << std::endl;
        std::cout << "Give me another number (integer): " << std::endl;
        std::cin >> a;
    }
    if (a % 2 != 0) {
        for (int i = 1; i <= a; ++i) {
            if (i <= a / 2 + 1) {
                for (int k = i; k < a / 2 + 1; k++) {
                    std::cout << " ";
                }
                for (int j = a - i; j < (a + i - 1); j++) {
                    std::cout << "*";
                }
                std::cout << std::endl;
            } else {
                for (int k = 0; k < i - a / 2 - 1; k++) {
                    std::cout << " ";
                }
                for (int j = 0; j <= a - i + (a - i); j++) {
                    std::cout << "*";
                }
                std::cout << std::endl;
            }
        }

    } else {
        for (int i = 1; i <= a; ++i) {
            if (i < a / 2 + 1) {
                for (int k = i; k < a / 2 + 1; k++) {
                    std::cout << " ";
                }
                for (int j = a - i; j < (a + i - 1); j++) {
                    std::cout << "*";
                }
                std::cout << std::endl;
            } else {
                for (int k = 0; k < i - a / 2; k++) {
                    std::cout << " ";
                }
                for (int j = 0; j <= a - i + (a - i); j++) {
                    std::cout << "*";
                }
                std::cout << std::endl;
            }
        }
    }

    return 0;
}