#include <iostream>
#include <vector>
using namespace std;

int main(){
   int arr1[] = {1,2,2,1};
  int arr2[] =  {2,2};

  int arr1size = sizeof(arr1) / sizeof(arr1[0]);
  int arr2size = sizeof(arr2) / sizeof(arr2[0]);

  int i=0;
  int j=0;
  vector<int>intersection;

  while(i<arr1size && j<arr2size){
    if(arr1[i]==arr2[j]){
     intersection.push_back(arr1[i]);
     i++;
     j++;
    }
    else if(arr1[i]<arr2[j]){
      i++;
    }
    else{
      j++;
    }
  }

  for(int i=0;i<intersection.size();i++){
    cout<<intersection[i]<<" ";
  }
}