#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
  string s = "345566";
  int n=s.length();
  int maxOdd=0;
  for(int i=n;i>=0;i--){
    string subs = s.substr(0,i);
      if(stoi(subs)%2!=0){
       cout<<subs;
       break;
      }  
  }
  return 0;
}