#include<bits/stdc++.h>
using namespace std;

void printName(int n){
  if(n==5){
    return;
  }
  printName(n+1);
  cout<<n;
}
int main(){
  int n=0;

  printName(n);
}