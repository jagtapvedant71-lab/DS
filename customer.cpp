#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> orders;
    int orderNo;

 
    cout << "Enter 5 customer order numbers:\n";

    for (int i = 0; i < 5; i++) {
        cin >> orderNo;
        orders.push(orderNo);
    }

 
    cout << "\nProcessing orders:\n";

    while (!orders.empty()) {
        cout << "Processing Order No: " << orders.front() << endl;
        orders.pop();
    }

    return 0;
}
