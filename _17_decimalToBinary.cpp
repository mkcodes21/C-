#include<iostream>
using namespace std;

int main(){
    // Decimal to binary conversion

    // int num;
    // cout<<"Enter the number : ";
    // cin>>num;
    // int rem, ans=0, mul=1;
    // while(num>0){
    //     rem = num%2;
    //     num = num / 2;
    //     ans = rem * mul + ans;
    //     mul*=10;
    // }
    // cout<<ans<<endl;



    // Binary to Decimal conversion

    // int num;
    // cout<<"Enter the number : ";
    // cin>>num;
    // int rem, ans=0, mul=1;
    // while(num>0){
    //     rem = num%10;
    //     num = num/10;
    //     ans = rem * mul + ans;
    //     mul*=2;
    // }

    // cout<<ans<<endl;



    // Decimal to Octa conversion

    // int num;
    // cout<<"Enter the number: ";
    // cin>>num;
    // int rem, ans =0, mul=1;
    // while(num){
    //     rem = num % 8;
    //     num = num / 8;
    //     ans = rem * mul + ans;
    //     mul=mul*10;
    // }

    // cout<<ans<<endl;


    // Octa to Decimal

    //  int num;
    // cout<<"Enter the number: ";
    // cin>>num;
    // int rem, ans =0, mul=1;
    // while(num){
    //     rem = num % 10;
    //     num = num / 10;
    //     ans = rem * mul + ans;
    //     mul=mul*8;
    // }

    // cout<<ans<<endl;



    // Binary to Octa

    int num;
    cout<<"Enter the number: ";
    cin >> num;

int rem, decimal = 0, mul = 1;

// Binary -> Decimal
while(num > 0){
    rem = num % 10;
    num /= 10;
    decimal += rem * mul;
    mul *= 2;
}

// Decimal -> Octal
int octal = 0;
mul = 1;

while(decimal > 0){
    rem = decimal % 8;
    decimal /= 8;
    octal += rem * mul;
    mul *= 10;
}

cout << octal<<endl;
    
}