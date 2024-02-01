#include<iostream>
using namespace std;



int main(){
  int arr[10] = {10,0, 0, 43, 0,565,0,2,4,24};
  

  // BRUTE FORCE

  for(int i=0;i<10;i++){
    if(arr[i]!=0){
      temp[index] = arr[i];
      index++;
    }else{
      zerocount++;
    }
  }

  for(int i=index;i<10;i++){
    temp[i]=0;

  }
  for(int i=0;i<10;i++){
    cout<<temp[i]<<" ";
  }



  // OPTIMAL
  // int j=0;
  
  // for(int i=0;i<10;i++){
  //   if(arr[i]!=0){
  //     swap(arr[i],arr[j]);
  //     j++;
  //   }
  // }
  //   for(int i=0;i<10;i++){
  //   cout<<arr[i]<<" ";
  // }
}