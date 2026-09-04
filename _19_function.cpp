#include<iostream>
using namespace std;

int sum (int m,int n){

    int ans= m + n;
    return ans;
}

int main(){
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<sum(a,b)<<endl;
}