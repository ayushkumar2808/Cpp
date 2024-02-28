#include <bits/stdc++.h>
using namespace std;


int main(){
  string s= "  -456";

  int low=0;
  bool pos=true;
  int ans=0;
  int nonDigCount=0;
  while(low<s.length()){
    if(s[low]=='-'){
      pos=false;
    }
    else if(s[low]>=48 && s[low]<=58 && nonDigCount==0){
    ans=(ans*10)+(s[low]-'0');
    }
    else if(s[low]==32){
      low++;
      continue;
    }
    else{
      break;
    }
    low++;
  }
if(!pos){
  ans=-ans;
}

cout<<ans;
return 0;

}