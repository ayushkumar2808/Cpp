#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

  int arr[] = {102,4,10,101,103,3,2,1};
  int size = sizeof(arr)/sizeof(arr[0]);
  int ans=1;
  int maxans=0;
  sort(arr,arr+size);
  for(int i=0;i<size;i++){
    if((arr[i]+1)==arr[i+1]){
      ans++;
      maxans=max(maxans,ans);
    }
    else if(arr[i]==arr[i+1]){
      cout<<"continuing becz "<<arr[i]<<"==="<<arr[i+1]<<endl;
      continue;
    }
    else{
      ans=1;
    }
  }
  cout<<maxans;
}