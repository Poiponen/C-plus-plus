#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    // definite iteration
    // run loop 5 times because list contains 5 items
    int totalSum = 0;
    for (int number : numbers) {
        totalSum = totalSum + number;
    }
    int listSize = numbers.size();
    double average = static_cast<double>(totalSum) / listSize;
    std::cout << average << std::endl;

    return 0;
}
