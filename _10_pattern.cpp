// Online C++ compiler to run C++ program online

//         * 
//       * * 
//     * * *    print this pattern
//   * * * * 
// * * * * * 


#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
   int i,j,k,n;
   cout<<"Enter a number: ";
   cin>>n;

//    for(i=1; i<=n; i++){
//     for(j=1; j<=n-i; j++){
//         cout<<"  ";
//     }
//     for(k=1; k<=i; k++){
//         cout<<"* ";
//     }
    
//     cout<<endl;
//    }

    


//         1 
//       1 2 
//     1 2 3 
//   1 2 3 4 
// 1 2 3 4 5 

//  for(i=1; i<=n; i++){
//         for(j=1; j<=n-i; j++){
//             cout<<"  ";
//         }
//         for(k=1; k<=i; k++){
//         cout<<k<<" ";
        
        
//         }
//         cout<<endl;
//     }
// return 0;
// } 



//         1 
//       2 2 
//     3 3 3 
//   4 4 4 4 
// 5 5 5 5 5 



   
//     for(i=1; i<=n; i++){
//         for(j=1; j<=n-i; j++){
//             cout<<"  ";
//         }
//         for(k=i; k>=1; k--){
//         cout<<i<<" ";
        
        
//         }
//         cout<<endl;
//     }
    
   

//     return 0;
// }


//         1 
//       2 1 
//     3 2 1 
//   4 3 2 1 
// 5 4 3 2 1 


// for(i=1; i<=n; i++){
//         for(j=1; j<=n-i; j++){
//             cout<<"  ";
//         }
//         for(k=i; k>=1; k--){
//         cout<<k<<" ";
        
        
//         }
//         cout<<endl;
//     }
    
   

//     return 0;
// }


//         A 
//       B B 
//     C C C 
//   D D D D 
// E E E E E 


 
//     for(i=1; i<=n; i++){
//         char ch='A'+(i-1);
//         for(j=1; j<=n-i; j++){
//             cout<<"  ";
//         }
//         for(k=1; k<=i; k++){
//         cout<<ch<<" ";
        
        
        
//         }
//         cout<<endl;
//     }
    
   

//     return 0;
// }


//         1 
//       1 2 
//     1 2 3 
//   1 2 3 4 
// 1 2 3 4 5 


//  for(i=1; i<=n; i++){
        
//         for(j=1; j<=n-i; j++){
//             cout<<"  ";
//         }
//         for(k=1; k<=i; k++){
//         cout<<k<<" ";
        
        
//         }
//         cout<<endl;
//     }
    
   

//     return 0;
// }

//         5 
//       5 4 
//     5 4 3 
//   5 4 3 2 
// 5 4 3 2 1 


// for(i=1; i<=n; i++){
        
//         for(j=1; j<=n-i; j++){
//             cout<<"  ";
//         }
//         for(k=n; k>n-i; k--){
//         cout<<k<<" ";
        
//         }
//         cout<<endl;
//     }

//     return 0;
// }



//         E 
//       E D 
//     E D C 
//   E D C B 
// E D C B A 


//  for(i=1; i<=n; i++){
//     //    char ch='E';  this is also correct but we can also use the below method
//         char ch = 69;
//         for(j=1; j<=n-i; j++){
//             cout<<"  ";
//         }
//         for(k=n; k>n-i; k--){
//         cout<<ch<<" ";
//         ch--;
        
//         }
//         cout<<endl;
//     }

//     return 0;
// }


//         1 
//       1 2 3 
//     1 2 3 4 5 
//   1 2 3 4 5 6 7 
// 1 2 3 4 5 6 7 8 9 

 
    for(i=1; i<=n; i++){
    //    char ch='E'; 
        for(j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(j=1; j<=2*i-1; j++){
        cout<<j<<" ";
        
        
        }
        cout<<endl;
    }

    return 0;
}