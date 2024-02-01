#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[9] = {1, 2, 3, 4, 1, 2, 3, 2, 4};
  int target = 6;
  int len = 0;

  for (int i = 0; i < 9; i++)
  {
    int sum = 0;
    for (int j = i; j < 9; j++)
    {
      sum += arr[j];

      if (sum == target)
      {
        len = max(len, j - i + 1);
      }
    }
  }
  cout << len << endl;
  return 0;
}