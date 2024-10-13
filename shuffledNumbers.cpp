// This code uses the C++ Standard Library for random number generation and shuffling
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

int main() {
    // Shuffle a range of numbers
    std::vector<int> numbers;
    for (int i = 0; i < 10; ++i) {
        numbers.push_back(i);
    }

    // Shuffle the numbers
    std::random_device randomDevice;
    std::mt19937 generator(randomDevice());
    std::shuffle(numbers.begin(), numbers.end(), generator);

    // Print the shuffled numbers
    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl; // Output [1, 7, 0, 3, 2, 9, 6, 8, 4, 5]

    return 0;
}
