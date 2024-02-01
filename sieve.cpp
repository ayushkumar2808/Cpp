#include <iostream>
using namespace std;

//sieve of etrathosthenes
int main(){
  int n;
  cin>>n;
  bool arr[n+1];
  for(int i=0;i<=n;i++){
    arr[i]=true;
  }
  arr[0] = false;
  arr[1] = false;
  for(int i = 0 ;i*i<=n;i++){
    if(arr[i]!=false){
      for(int j=i*i;j<=n;j=j+i){
        arr[j] = false;     
      
      }
    }
  }
  for(int i = 0;i<=n;i++){
    if(arr[i]==true){
      cout<<"primes "<<i<<endl;
    }
  }

}