#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

int main() {
    std::vector<int> originalNumbers = {33, 66, 99, 188, 256, 412, 748};
    // copy to new list
    std::vector<int> shuffledNumbers = originalNumbers; 
    // shuffle the new list
    std::random_device randomDevice;
    std::mt19937 generator(randomDevice());
    std::shuffle(shuffledNumbers.begin(), shuffledNumbers.end(), generator);

    std::cout << "Original list : ";
    for (const int number : originalNumbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl; //  [33, 66, 99, 188, 256, 412, 748]

    std::cout << "List after shuffle: ";
    for (const int number : shuffledNumbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl; // Output [188, 412, 33, 256, 66, 748, 99]

    return 0;
}
