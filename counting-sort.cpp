#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    vector<int>v;
    for(auto it: mp){
      for(int i=0;i<it.second;i++){
        v.push_back(it.first);
      }
    }

   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
   
    return 0;
}