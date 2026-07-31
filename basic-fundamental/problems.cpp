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


void print(int n){
     for(int i=0; i<n; i++){
      //space
      for(int j=0; j<n-i-1; j++){
        cout<<" ";
      }
      for(int k=0; k<2*i+1; k++){
        cout<<"*";
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