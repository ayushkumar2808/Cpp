#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int arr[]={1,3,2};
  int n = sizeof(arr)/sizeof(arr[0]);
  int idx=-1;
  for(int i=0;i<n-1;i++){
    if(arr[i]<arr[i+1]){
      idx=i;
    }
  }
  if(idx==-1){
    reverse(arr,arr+n);
  }
  else{
    for(int i=n-1;i>=(idx+1);i--){
      if(arr[i]>arr[idx]){    
        swap(arr[i],arr[idx]);
       break;
      }
      // cout<<arr[i];
    }
  }
reverse(arr+idx+1,arr+n);
for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
}
}