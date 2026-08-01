#include<iostream>
using namespace std;

// void revrseArray(int *arr,int n){
//   int low=0;
//   int high=n-1;
//   while(low<high){
//     swap(arr[low],arr[high]);
//     low++;
//     high--;
//   }

// }
// void print(int n){
//   for(int i=0; i<n;i++){
//     for(int j=0; j<n-i; j++){
//       cout<<"*"<<" ";
//     }
//     cout<<"\n";
//   }
// }


// void print(int n){
//   for(int i=0; i<n;i++){
//     for(int j=1; j<=n-i; j++){
//       cout<<j<<" ";
//     }
//     cout<<"\n";
//   }
// }

// 7 no striver
//     *
//    ***
//   *****
//  *******
// *********

// void print(int n){
//      for(int i=0; i<n; i++){
//       //space
//       for(int j=0; j<n-i-1; j++){
//         cout<<" ";
//       }
//       for(int k=0; k<2*i+1; k++){
//         cout<<"*";
//       }
//       cout<<"\n";
//      }

// }


// *********
//  *******
//   *****
//    ***
//     *
 
// void print(int n){
//   for(int i=0; i<n; i++){
//     for(int j=0; j<i; j++){
//       cout<<" ";
//     }
//     for(int k=0; k<2*n-1-2*i; k++){
//       cout<<"*";
//     }
//     cout<<"\n";
//   }
// }

// 14
// A
// AB
// ABC
// ABCD
// ABCDE
// void print(int n){
//   for(int i=0; i<n;i++){
//     char ch='A';
//     for(int j=0; j<=i; j++){
//       cout<<ch;
//       ch++;
//     }
//     cout<<"\n";
//   }
// }

// 16
// A
// BB
// CCC
// DDDD
// EEEEE

// void print(int n){
//     char ch='A';
//   for(int i=0; i<n;i++){
  
//     for(int j=0; j<=i; j++){
//       cout<<ch;
     
//     }
//      ch++;
//     cout<<"\n";
//   }
// }

// 15
// ABCDE
// ABCD
// ABC
// AB
// A


// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
// void print(int n){
//    int cnt=1;
//   for(int i=1; i<=n;i++){
   
//     for(int j=1; j<=i; j++){
//       cout<<cnt<<" ";
//         cnt++;
//     }
    
//     cout<<"\n";
//   }
// }


// 18
// E
// DE
// CDE
// BCDE
// ABCDE
void print(int n){
  for(int i=0; i<n;i++){
   char  ch = 'A' + n-1-i;
    for(int j=0; j<=i; j++){
      cout<<ch;
      ch++;
    }
    cout<<"\n";
  }
}

int main(){
  // int arr[] = {1,2,3,4,5};

  // revrseArray(arr,5);

  print(5);
 
  return 0;
}