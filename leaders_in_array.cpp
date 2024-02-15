#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int arr[]={10,22,12,3,0,6};
  int n = sizeof(arr)/sizeof(arr[0]);
  vector<int>temp;

 // BRUTE FORCE
//   for(int i=0;i<n;i++){

// bool flag=false;
//     for(int j=i+1;j<n;j++){
//       if(arr[i]>arr[j]){
       
//          flag=true;
//       }
//       else{
//         flag=false;
//         break;
//       }
//     }
//     if(flag==true){
//       temp.push_back(arr[i]);
//     }

//   }

//OPTIMAL

int rightMax=0;
for(int i=n-1;i>=0;i--){
if(arr[i]>rightMax){
  temp.push_back(arr[i]);
}
rightMax = max(rightMax,arr[i]);
}
   for(int i=0;i<temp.size();i++){
    cout<<temp[i]<<" ";
   }
   return 0;

}