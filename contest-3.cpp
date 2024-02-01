#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  // Enter your code below
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  if(n==0){
    cout<<-1;
  }
  int size = sizeof(arr)/sizeof(arr[0]);
  int count=0;
//   for(int i=0;i<n;i++){

//     for(int j=0;j<n-1;j++){
//         if(arr[j]==0){
//             swap(arr[j],arr[j+1]);
//         }
//     }
//   }

//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
  vector<int>v;
  for(int i=0;i<n;i++){
    if(arr[i]==0){
        count++;
    }
    else{
        v.push_back(arr[i]);
    }
    }
    for(int i=1;i<=count;i++){
        v.push_back(0);
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


  return 0;
}