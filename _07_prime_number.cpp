#include<iostream>
using namespace std;

int main () {
    int n, i;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 2){
        cout << n << " is not a prime number"<< endl;
        return 0;
    }
    else {
        for (i = 2; i < n ; i++){
            if (n % i == 0){
                cout << n << " is not a prime number"<< endl;
                return 0;
            }
        }
        cout << n << " is a prime number"<< endl;
    }
    
}