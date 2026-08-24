// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;

// int main() {
//     // Write C++ code here
//     int n,i,j;
//     cout<<"Enter a number: ";
//     cin>>n;

//     for(i = 0; i< n ; i++){
//         for(j=0; j<n; j++){
//             cout<<n<<" ";
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
//         for(j=1; j<=n; j++){
//             cout<<j*j*j<<" ";
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

    for(i = 1; i<= n ; i++){
        char ch='F';
        for(j=1; j<=n; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }

    return 0;
}