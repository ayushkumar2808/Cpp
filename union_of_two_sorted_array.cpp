#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{

  int arr[] = {1, 1, 2, 3, 4, 5};
  int arr2[] = {2, 3, 4, 5, 6,7,8,8,8,9};

  int arr1size = sizeof(arr) / sizeof(arr[0]);
  int arr2size = sizeof(arr2) / sizeof(arr2[0]);


  // BRUTE FORCE

  // map<int, int> mp;
  // for (int i = 0; i < arr1size; i++)
  // {
  //   mp[arr[i]]++;
  // }
  // for (int i = 0; i < arr2size; i++)
  // {
  //   mp[arr2[i]]++;
  // }
  // for (auto it : mp)
  // {
  //   cout << it.first << " ";
  // }



  // OPTIMAL

  int i=0;
  int j=0;
 vector<int> unionArr;
 
  while(j<arr2size && i<arr1size){
    if(arr[i]<=arr2[j]){
      if(unionArr.size()==0 || unionArr.back()!=arr[i]){
        unionArr.push_back(arr[i]);
      }
      i++;
    }
    else{
       if(unionArr.size()==0 || unionArr.back()!=arr2[j]){
        unionArr.push_back(arr2[j]);
      }
      j++;
    }
  }

  while (j<arr2size)
  {
     if(unionArr.size()==0 || unionArr.back()!=arr2[j]){
        unionArr.push_back(arr2[j]);
      }
      j++;
  }

  while ( i<arr1size)
  {
     if(unionArr.size()==0 || unionArr.back()!=arr[i]){
        unionArr.push_back(arr[i]);
      }
      i++;
  }
  
  

  for(int i=0;i<unionArr.size();i++){
    cout<<unionArr[i]<<" ";
  }
}