// This code is translated from Python to C++ using the standard library for date and time handling
#include <iostream>
#include <chrono>
#include <ctime>

int main() {
    // Get the current time
    auto currentTime = std::chrono::system_clock::now();
    std::time_t currentTimeT = std::chrono::system_clock::to_time_t(currentTime);
    
    // Print the current date and time
    std::cout << "Current DateTime: " << std::ctime(&currentTimeT);
    
    // Print the type of the current time variable
    std::cout << "Type: std::chrono::system_clock::time_point" << std::endl;

    return 0;
}
