#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    // iterate over each element in list num
    for (int i : numbers) {
        // ** exponent operator
        int square = i * i; // Using multiplication for squaring
        std::cout << "Square of: " << i << " is: " << square << std::endl;
    }
    return 0;
}
