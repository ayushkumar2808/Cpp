#include <iostream>
using namespace std;

int main(){
  int arr[] = {10,30,23,2323,233,314};
  int size = sizeof(arr)/sizeof(arr[0]);
  int n = 314;

  for(int i=0;i<size;i++){
    if(arr[i]==n){
      cout<<"true";
      return 0;
    }
  }
  cout<<"false";
  return 0;

}