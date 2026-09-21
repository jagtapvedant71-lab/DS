#include <iostream>

int main() {
    int rollNumbers[5];

    std::cout << "--- Enter Roll Numbers of 5 Students ---\n";
    
    for (int i = 0; i < 5; i++) {
        std::cout << "Enter roll number for student " << (i + 1) << ": ";
        std::cin >> rollNumbers[i];
    }

    std::cout << "\n--- Displaying Student Roll Numbers ---\n";
    
    for (int i = 0; i < 5; i++) {
        std::cout << "Student " << (i + 1) << " Roll Number: " << rollNumbers[i] << "\n";
    }

    return 0;
}
