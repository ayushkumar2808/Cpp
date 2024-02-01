#include <iostream>
using namespace std;


int main() {
  int arr[] = {1,0,0,1};
  int n = sizeof(arr)/sizeof(arr[0]);
  bool flag = true;
  for(int i=0;i<n;i++){
    if(arr[i]>arr[i+1]){
      flag = false;
    }
  }
  cout<<flag<<endl;

  return 0;
}