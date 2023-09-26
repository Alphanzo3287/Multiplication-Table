#include <iostream>
#include <iomanip>

int main() {
    const int size = 10;

    // Print the top row labels
    std::cout << "   |";
    for (int col = 1; col <= size; ++col) {
        std::cout << std::setw(4) << col;
    }
    std::cout << "\n---------------------------------------------\n";

    // Generate and print the times table grid
    for (int row = 1; row <= size; ++row) {
        std::cout << std::setw(2) << row << " |";
        for (int col = 1; col <= size; ++col) {
            std::cout << std::setw(4) << row * col;
        }
        std::cout << std::endl;
    }

    return 0;
}
