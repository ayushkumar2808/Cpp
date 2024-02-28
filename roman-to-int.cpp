#include <bits/stdc++.h>
using namespace std;

int main()
{
  unordered_map<char, int> mp;
  mp['I'] = 1;
  mp['V'] = 5;
  mp['X'] = 10;
  mp['L'] = 50;
  mp['C'] = 100;
  mp['D'] = 500;
  mp['M'] = 1000;

  string roman = "MMMDCCCLXXXVIII";

  int low = 0;
  int ans = 0;

  while(low<=roman.length()){
    if(mp[roman[low]]<mp[roman[low+1]]){
      ans-=mp[roman[low]];
    }
    else{
    ans+=mp[roman[low]];

    }
    low++;
  }

cout<<ans;
  return 0;
}