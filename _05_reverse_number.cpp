#include<iostream>
using namespace std;

int main () {
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    
    // for (int i = num; i >0; i--){
    //     cout << i << endl;
    // }


//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//    for (int i = 1; i <= n; i=i+3){
//     cout << i << endl;
//    }

    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    
    // for (int i = 1; i <=10; i++){
    //     cout<<n << " * " << i << " = "<< i*n << endl;
    // }

    // Power of a number
    
    // int n, pow, i , num;
    // cout << "Enter a number: ";
    // cin >> n;
    // cout << "Enter the power: ";
    // cin >> pow;
    //  num = n;
    
    //  for (i = 1; i <pow; i++){
    //     num = num * n;
    //  }
    //  cout << num << endl;



    // sum of n natural numbers
    
    // int n,i, sum = 0;
    // cout << "Enter a number: ";
    // cin >> n;
    
    // for (i=1; i <= n; i++){
    //     sum = sum + i;
    // }
    // cout << sum << endl;


    // Sum of 1 to n squares
    
    int n , i, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    
    for (i = 1; i <= n; i++){
        sum = sum + (i*i);
    }
    cout << sum << endl;
}