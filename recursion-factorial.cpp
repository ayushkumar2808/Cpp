#include<iostream>
using namespace std;
int factt(int n){
  if(n==0){
    return 1;
  }
  return n * factt(n-1);
}

int main(){
  int n=10;
  cout<<factt(n);
}