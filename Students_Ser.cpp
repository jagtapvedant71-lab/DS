#include <iostream>
using namespace std;

int main() {
    int rollNumbers[5];
    int searchRollNo;
    bool isFound = false;

    cout << "Enter the roll numbers of 5 students:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << (i + 1) << ": ";
        cin >> rollNumbers[i];
    }

    cout << "\nEnter the roll number you want to search for: ";
    cin >> searchRollNo;

    for (int i = 0; i < 5; i++) {
        if (rollNumbers[i] == searchRollNo) {
            isFound = true;
            break;
        }
    }

    if (isFound) {
        cout << "STUDENT FOUND" << endl;
    } else {
        cout << "STUDENT NOT FOUND" << endl;
    }

    return 0;
}
