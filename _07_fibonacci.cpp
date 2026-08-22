#include <iostream>
using namespace std;

int main() {
    int n,i, last = 0, previous = 1, current;

    cout << "Enter the number of terms: ";
    cin >> n;

    for ( i = 1; i <= n; i++) {
        cout << last << " ";

        current = last + previous;
        last = previous;
        previous = current;
    }

    return 0;
}