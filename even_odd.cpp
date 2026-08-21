#include <iostream>
using namespace std;

// int main (){
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (num % 2 == 0) {
//         cout << num << " Is Even number"<< endl;
//     }
//     else{
//         cout << num << " Is Odd number" << endl;
//     }
// }

int main (){
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18){
        cout << "Adult" << endl;
    }
    else{
        if (age < 0){
            cout << "Invalid age:" << age << endl;
        }
        else{
            cout << "Teenager" << endl;
        }
        
    }
}