#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int arr[] = {2,3,4,5,-1,-4,-3,-6,44,32};
  int size = sizeof(arr)/sizeof(arr[0]);

  vector<int>positive;
  vector<int>negative;
  vector<int>ans;
  int posC=0;
  int negC=0;

  for(int i=0;i<size;i++){
    if(arr[i]<0){
      negative.push_back(arr[i]);
      negC++;
    }
    else{
      positive.push_back(arr[i]);
      posC++;
    }
  }

cout<<posC<<" "<<negC<<endl;
  for(int i=0;i<max(negC,posC);i++){
    if(i<negC){
    ans.push_back(negative[i]);  
    }
     if(i<posC){
      cout<<"i "<<i<<" "<<positive[i]<<endl;
     ans.push_back(positive[i]);
    }
    
   
  }

  for(auto i:ans){
    cout<<i<<" ";
  }
}