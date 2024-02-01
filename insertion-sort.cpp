#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
 
  for(int i=0;i<n-1;i++){
   int j = i;
    for(int j=0;j<n-i;j++){
      while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j-1],arr[j]);
        j--;
      }
    }
  }
}

int main(){
  int arr[10] = {10,133, 332, 43, 5656,565,563,2,4,24};
  insertionSort(arr,10);
  for(int i=0;i<10;i++){
    cout<<arr[i]<<" ";
  }
}