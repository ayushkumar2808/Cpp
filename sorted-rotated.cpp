#include <bits/stdc++.h>
using namespace std;

int main(){
  int arr[] ={7,8,9,1,2,3,3,4,5,6};
  int size = sizeof(arr)/sizeof(arr[0]);
  int target=3;
  int low=0;
  int high=size-1;

  while(low<=high){
int mid = low+(high-low)/2;
    if(arr[mid]==target){
      cout<<mid;
      return 0;
    }
    if(arr[mid]==arr[low]==arr[high]){
      low++;
      high--;
      continue;
    }

    if(arr[low]<=arr[mid]){
      if(arr[low]<=target && target<=arr[mid]){
        high=mid-1;
      }
      else{
        low=mid+1;
      }
    }
    else{
      if(arr[mid]<=target && target<=arr[high]){
        low=mid+1;
      }
      else{
        high=mid-1;
      }
    }
  }
  cout<<-1;
  return 0;


}