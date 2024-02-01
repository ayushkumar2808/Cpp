#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
 
  for(int i=0;i<n;i++){
    int bigindex = 0;
    for(int j=0;j<n-i;j++){
     if(arr[j]>arr[bigindex]){
      bigindex = j;
     }
    }
    cout<<"swapping "<<arr[n-i-1]<<" "<<arr[bigindex]<<endl;
    swap(arr[n-i-1],arr[bigindex]);
  }
}

int main(){
  int arr[10] = {10,133, 332, 43, 5656,565,563,2,4,24};
  selectionSort(arr,10);
  for(int i=0;i<10;i++){
    cout<<arr[i]<<" ";
  }
}