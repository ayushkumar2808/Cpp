#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  int arr[6] = {1, 2, 3, 1, 1, 4};
  map<int,int> ans;
  for(int i=0;i<6;i++){
    ans[arr[i]]++;
  }
  int mini = 100;
  int maxi = 0;

  for(auto x: ans){
    cout<<x.first<<"->"<<x.second<<endl;
    mini = min(mini,x.second);
    maxi = max(maxi,x.second); 
  }
  cout<<mini<<" "<<maxi;
}