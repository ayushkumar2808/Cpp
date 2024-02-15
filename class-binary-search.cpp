#include <iostream>
using namespace std;

int main(){
  int arr[8]={1,2,3,4,5,6,7,8};
  int size = sizeof(arr)/sizeof(arr[0]);
  int t=4;

  int low = 0;
  int high = size-1;
  string ans="not";
  while(low<=high){
    int mid = low+(high-low)/2;
    if(arr[mid]==t){
      ans="present";
      break;
    }
    else if(arr[mid]>t){
      high=mid-1;
    }
    else{
      low=mid+1;
    }
  }
  cout<<ans;
  
  return 0;
}