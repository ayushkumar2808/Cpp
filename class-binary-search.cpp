#include <iostream>
using namespace std;

int main(){
  int arr[8]={1,2,3,4,5,6,7,8};
  int size = sizeof(arr)/sizeof(arr[0]);
  int t;
  cin>>t;

  int start = 0;
  int end = size-1;

  while (start<=end)
  {
    int mid = start+(end-start)/2;

    if(arr[mid]==t){
      cout<<"present at index: "<<mid<<endl;
      return 0;
    }
    else if(arr[mid]<t){
      start = mid+1;
    }
    else{
      end = mid-1;
    }
  }
  cout<<"not present";
  
  return 0;
}