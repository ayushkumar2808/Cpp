#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
 
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
     if(arr[j]>arr[j+1]){
      cout<<"swapping "<<arr[j]<<" "<<arr[j+1]<<endl;
      swap(arr[j],arr[j+1]);
     }
    }
  }
}

int main(){
  int arr[10] = {10,133, 332, 43, 5656,565,563,2,4,24};
  bubbleSort(arr,10);
  for(int i=0;i<10;i++){
    cout<<arr[i]<<" ";
  }
}