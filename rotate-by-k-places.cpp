#include <map>
#include <iostream>
using namespace std;

int main(){
  int arr[] = {1,2,3,4,5,6,7};
 
  int size = sizeof(arr)/sizeof(arr[0]);
  int temp[size];
  int k = 1;

  for(int i=0;i<k;i++){
    temp[i]=arr[i];
  }
  for(int i=k;i<size;i++){
   arr[i-k] = arr[i];
  }
  int d=0;

  for(int i=size-k;i<size;i++){
    arr[i] = temp[d];
    d++;
  }

  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }

}

// brute force

//   for(int i=0;i<k;i++){
//     temp[i]=arr[i];
//   }
//   for(int i=k;i<size;i++){
//    arr[i-k] = arr[i];
//   }
//   int d=0;

//   for(int i=size-k;i<size;i++){
//     arr[i] = temp[d];
//     d++;
//   }

//   for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";
//   }
