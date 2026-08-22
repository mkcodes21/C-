#include<iostream>
using namespace std;

int main () {

    int n, i, last=0,prev=1, curr=1;
    cout << "Enter a number: ";
    cin >> n;
    
    for (i =1; i <= n; i++){
        curr = prev + last;
        prev = last;
        last = curr;
    }
    cout << "The " << n << "th Fibonacci number is: " << prev << endl;
}