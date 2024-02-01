#include<iostream>
using namespace std;

int secondLargest(int arr[], int n){
  int largest=0;
  int second_largest=0;
  for(int i=0;i<n;i++){
    if(arr[i]>largest){
      second_largest = largest;
      largest  = arr[i];
    }
    if(arr[i]  > second_largest && arr[i] != largest ){
      second_largest = arr[i];
    }
  }
  cout<<second_largest<<endl;
  return second_largest;
  
}

int main(){
  int arr[10] = {10,133, 332, 43, 5656,565,563,2,4,24};
   int n = sizeof(arr) / sizeof(arr[0]);
 secondLargest(arr, n);
  
}

