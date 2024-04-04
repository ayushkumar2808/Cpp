#include <bits/stdc++.h>
using namespace std;

bool powerof3(int n, int k)
{
  if (k == n)
  {
    return true;
  }
  if (k > n)
  {
    return false;
  }
  return powerof3(n, k * 3);
}

int main()
{

  int n=9;
  if (n == 0)
  {
    cout << "false";
    return 0;
  }
  if (n == 1)
  {
    cout << "true";
    return 0;
  }
  cout<<powerof3(n, 3);
}