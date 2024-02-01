#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int findMajority(int arr[],int n){

 // MY INTUITION

//  map<int,int> mp;
//  for(int i=0;i<n;i++){
//   mp[arr[i]]++;
//  }

// int ans=0;
//  for(auto it:mp){
//   if(it.second>n/2){
//     ans = it.first;
//   }
//  }
//  return ans;


// BOYER MOORE
int votes=0;
int candidate= -1;
for(int i=0;i<n;i++){
  if(votes==0){
    candidate=arr[i];
    votes=1;
  }
  else{
    if(arr[i]==candidate){
      votes++;
    }
    else{
      votes--;
    }
  }
}

int count=0;
for(int i=0;i<n;i++){
  if(arr[i]==candidate){
    count++;
  }
}
if(count>n/2){
  return candidate;
}
return -1;
}

int main(){

  int arr[] = { 1, 2, 2, 1, 2, 3, 2 };
  int size = sizeof(arr)/sizeof(arr[0]);

  int ans = findMajority(arr,size);
  cout<<ans;
}