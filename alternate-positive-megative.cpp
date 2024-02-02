#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int arr[] = {2,3,4,5,-1,-4,-3,-6};
  int size = sizeof(arr)/sizeof(arr[0]);

  vector<int>positive;
  vector<int>negative;
  vector<int>ans;
  for(int i=0;i<size;i++){
    if(arr[i]<0){
      negative.push_back(arr[i]);
    }
    else{
      positive.push_back(arr[i]);
    }
  }

  for(int i=0;i<positive.size();i++){
    ans.push_back(positive[i]);
    ans.push_back(negative[i]);  
  }

  for(auto i:ans){
    cout<<i<<" ";
  }
}