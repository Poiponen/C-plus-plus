#include <iostream>

int main() {
    int number;
    std::cout << "Please Enter Number: ";
    std::cin >> number;
    
    while (number > 0) {
        // check even and odd
        if (number % 2 == 0) {
            std::cout << number << " is an even number" << std::endl;
        } else {
            std::cout << number << " is an odd number" << std::endl;
        }
        // decrease number by 1 in each iteration
        number = number - 1;
    }

    return 0;
}
