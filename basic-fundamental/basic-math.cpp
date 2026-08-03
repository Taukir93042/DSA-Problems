#include<iostream>
using namespace std;

// count all digints of a number
// int countDigits(int n){
//   int count=0;
//   while(n){
//     n /= 10;
//     count++;
//   }
//   return count;
// }



// reverse digits
// int reverseDegits(int n){
//   int ans=0;
//   while(n){
//     int rem = n%10;
//     n /= 10;
//     ans = ans*10 + rem;
    
//   }
//   return ans;
// }


// //reverse array using recursion

// void reverseArray(int arr[], int low, int high){
//       if(low>high) return;
//          swap(arr[low],arr[high]);
        
//       reverseArray(arr,low+1,high-1);
// }
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr)/sizeof(arr[0]);
   reverseArray(arr,0,size-1);

   for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
   }
  return 0;
}