#include <iostream>
#include <array>
#include <map>
using namespace std;

int main(){
  int arr[4] = {0,1,2,3};
  int sizearr = sizeof(arr)/sizeof(arr[0]);

  // BRUTE FORCE
  // sort(arr,arr+sizearr);
  // for (int i=1;i<=sizearr;i++){
    
  //   bool flag=false;
  //   for(int j=0;j<sizearr-1;j++){
  //     if(arr[j]==i){
  //       flag = true;
  //     }
  //   }
  //   if(flag==false){
  //     cout<<i;
  //   }
  // }



  // BETTER

  // map<int,int> mp;
  // for(int i=0;i<sizearr;i++){
  //   mp[arr[i]]++;
  // }

  // map<int, int>::iterator it = mp.begin();

  // for(int i=1;i<=sizearr;i++){
  //    it++;
  //   if(it->first != i){
  //     cout<<i;
  //   }
   
  // }


  // OPTIMAL 

  int xor1,xor2 = 0;
  int n = sizearr-1;
  for (int i = 0; i < n; i++)
  {
    xor2 = xor2 ^ arr[i];
    xor1 = xor1 ^ (i+1);
  }

cout<<(xor1 ^ xor2);

  return 0;
  


}