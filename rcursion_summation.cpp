#include<iostream>
using namespace std;


void summ(int n, int sum){
  if(n<0){
    cout<<"sum ="<<sum;
    return;
  } 
  summ(n-1,sum+n);
}

int main(){
  int n = 10;
  
  summ(n,0);
}