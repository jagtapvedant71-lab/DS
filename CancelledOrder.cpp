#include <iostream>
using namespace std;

int main()
{
    string stack[5];
    int top = -1;

    // Add 5 cancelled orders
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter cancelled order: ";
        cin >> stack[++top];
    }

    // Display from most recent order
    cout << "\nCancelled orders (most recent first):\n";

    while (top >= 0)
    {
        cout << stack[top] << endl;
        top--;
    }

    return 0;
}
