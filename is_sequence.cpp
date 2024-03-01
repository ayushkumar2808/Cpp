#include <bits/stdc++.h>
using namespace std;

int main()
{

  string s = "abc";
  string t = "ahbgdc";
  map<char, int> mp;

  for (int i = 0; i < t.length(); i++)
  {
    mp[t[i]]++;
  }
  for (int i = 0; i < s.length(); i++)
  {
     auto it = mp.find(s[i]);
  }
  return 0;
}