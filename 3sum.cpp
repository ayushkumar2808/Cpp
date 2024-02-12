#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n = 6;

  int target = 4;
  int arr[] = {1, 2, -1, 4, -2, 3};
  set<vector<int> > st;
  for (int i = 0; i < n; i++)
  {

    for (int j = i + 1; j < n; j++)
    {

      for (int k = j + 1; k < n; k++)
      {
        if (arr[i] + arr[j] + arr[k] == target)
        {
          vector<int> temp;
          temp.push_back(arr[i]);
          temp.push_back(arr[j]);
          temp.push_back(arr[k]);
          sort(temp.begin(), temp.end());
          st.insert(temp);
        }
      }
    }
  }

  for (auto itr : st)
  {
    cout << "{";
    for (int i = 0; i < itr.size(); i++)
    {
      cout << itr[i] << " ";
    }
    cout << "}";
  }
}