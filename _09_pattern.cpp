// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;

// int main() {
//     // Write C++ code here
//     int n,i,j;
//     cout<<"Enter a number: ";
//     cin>>n;

//     for(i = 1; i<= n ; i++){
        
//         for(j=1; j<=i; j++){
//             cout<<j<<" ";
            
//         }
//         cout<<endl;
//     }

//     return 0;
// }


// Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;

// int main() {
//     // Write C++ code here
//     int n,i,j;
//     cout<<"Enter a number: ";
//     cin>>n;

//     for(i = 1; i<= n ; i++){
//         char ch='A';
//         for(j=1; j<=i; j++){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }

//     return 0;
// }



// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;

// int main() {
//     // Write C++ code here
//     int n,i,j;
//     cout<<"Enter a number: ";
//     cin>>n;

//     for(i = 1; i<= n ; i++){
//        int count=10;
//         for(j=1; j<=i; j++){
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl; 
//     }

//     return 0;
// }


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n,i,j;
    cout<<"Enter a number: ";
    cin>>n;

    for(i = n; i>= 1 ; i--){
       char ch='A';
        for(j=1; j<=i; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl; 
    }

    return 0;
}