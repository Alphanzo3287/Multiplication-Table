# Lesson plan
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Print the header row
    cout << "   ";
    for (int i = 1; i <= 10; ++i) {
        cout << setw(4) << i;
    }
    cout << "\n-------------------------------------------\n";

    // Calculate and print the multiplication table
    for (int i = 1; i <= 10; ++i) {
        cout << setw(2) << i << " |";
        for (int j = 1; j <= 10; ++j) {
            cout << setw(4) << i * j;
        }
        cout << endl;
    }

    return 0;
}