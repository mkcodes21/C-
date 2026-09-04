#include<iostream>
using namespace std;

int main(){
    
    // Print 1 to n number using while loop

    // int n,i=1;
    // cout<<"Enter a number: ";
    // cin>>n;
    // while(i<=n){
    //     cout<<i<<endl;
    //     i++;
    // }

    // Write a program of table using while loop

    // int num,i=1;
    // cout<<"Enter your number: ";
    // cin>>num;
    // while(i<=10){
    //     cout<<num*i<<endl;
    //     i++;
    // }


    // write a program that print number of factor of a number

    // int num,i=1;
    // cout<<"Enter a number: ";
    // cin>>num;
    // while(i<=num){
    //     if(num%i==0)
    //     cout<<i<<endl;

    //     i++;
    // }


    //Print 1 to n even number using while loop

    // int n,i=1;
    // cout<<"Enter a number : ";
    // cin>>n;
    // while(i<=n){
    //     if(i % 2 == 0)
    //     cout<<i<<endl;

    //     i++;
    // }


//Print 1 to n odd number using while loop

    // int n,i=1;
    // cout<<"Enter a number : ";
    // cin>>n;
    // while(i<=n){
    //     if(i % 2 != 0)
    //     cout<<i<<endl;

    //     i++;
    // }


    // do-while loop

    //Print 1 to n numbers using do-while loop

    // int i=1,n;
    // cout <<"Enter a number: ";
    // cin>>n;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(i<=n);




    int sum=0,i=1,n;
    cout<<"Enter a number: ";
    cin>>n;
    do{
        sum=sum+i;
        i++;
    }while(i<=n);
    cout<<sum<<endl;
}