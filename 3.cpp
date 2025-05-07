#include <iostream>
#include <string>

int main() {
    // Declare a string array
    string colors[] ;

    // Get the size of the array
    int size = sizeof(colors) / sizeof(colors[0]);

    // Input: Assign new values to the array
    for (int i = 0; i < size; i++) {
        std::cout << "Enter color " << i + 1 << ": ";
        std::cin >> colors[i];
    }

    // Output: Display array elements using foreach loop
    std::cout << "Colors: ";
    for (const auto& color : colors) {
        std::cout << color << " ";
    }

    return 0;
}
