#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << " The cube of " << i
             << " is: " << i * i * i << endl;
    }

    return 0;
}
