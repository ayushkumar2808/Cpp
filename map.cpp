#include <iostream>
#include <map>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  map<int,int> hash;
  for(int i=0;i<n;i++){
    hash[arr[i]]++;
  }
  int a;
  cin>>a;
  while(a--){
    int num;
    cin>>num;
    cout<<hash[num]<<endl;
  }

}