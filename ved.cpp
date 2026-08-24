#include <iostream>
#include <string>

using namespace std;

int main()
{
    int id1, id2, id3;
    string title1, title2, title3; // Fixed typo: tltle3 -> title3

    // Book 1
    cout << "Enter Book 1 ID: ";
    cin >> id1;
    cin.ignore(); // Fixed typo: cint -> cin
    cout << "Enter Book 1 Title: ";
    getline(cin, title1);

    // Book 2
    cout << "Enter Book 2 ID: ";
    cin >> id2;
    cin.ignore(); // Fixed typo: cint -> cin
    cout << "Enter Book 2 Title: ";
    getline(cin, title2);

    // Book 3
    cout << "Enter Book 3 ID: ";
    cin >> id3;
    cin.ignore(); // Fixed typo: cint -> cin
    cout << "Enter Book 3 Title: ";
    getline(cin, title3);

    // --- COMPLETED PORTION: Displaying the data and closing main ---
    cout << "\n--- Book Details Entered ---\n";
    cout << "Book 1 -> ID: " << id1 << ", Title: " << title1 << "\n";
    cout << "Book 2 -> ID: " << id2 << ", Title: " << title2 << "\n";
    cout << "Book 3 -> ID: " << id3 << ", Title: " << title3 << "\n";

    return 0;
}
