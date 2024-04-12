#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void nextGreater(int arr1[], int arr1Size, int arr2[], int arr2Size) {
  unordered_map<int, int> mp;
  stack<int> st;

  for (int i = arr2Size - 1; i >= 0; i--) {
    int currnum = arr2[i];

    while (!st.empty() && st.top() <= currnum) {
      st.pop();
    }
    mp[currnum] = st.empty() ? -1 : st.top();
    st.push(currnum);
  }

  for (int i = 0; i < arr1Size; i++) {
    cout << mp[arr1[i]] << " ";
  }
  cout << endl;
}
void previousGreater(int arr1[], int arr1Size, int arr2[], int arr2Size) {
  unordered_map<int, int> mp;
  stack<int> st;

  for (int i = 0; i < arr2Size; i++) {
    int currnum = arr2[i];

    while (!st.empty() && st.top() <= currnum) {
      st.pop();
    }
    mp[currnum] = st.empty() ? -1 : st.top();
    st.push(currnum);
  }

  for (int i = 0; i < arr1Size; i++) {
    cout << mp[arr1[i]] << " ";
  }
  cout << endl;
}

void nextSmaller(int arr1[], int arr1Size, int arr2[], int arr2Size) {
  unordered_map<int, int> mp;
  stack<int> st;

  for (int i = arr2Size - 1; i >= 0; i--) {
    int currnum = arr2[i];

    while (!st.empty() && st.top() >= currnum) {
      st.pop();
    }
    mp[currnum] = st.empty() ? -1 : st.top();
    st.push(currnum);
  }

  for (int i = 0; i < arr1Size; i++) {
    cout << mp[arr1[i]] << " ";
  }
  cout << endl;
}
void previousSmaller(int arr1[], int arr1Size, int arr2[], int arr2Size) {
  unordered_map<int, int> mp;
  stack<int> st;

  for (int i = 0; i < arr2Size; i++) {
    int currnum = arr2[i];

    while (!st.empty() && st.top() >= currnum) {
      st.pop();
    }
    mp[currnum] = st.empty() ? -1 : st.top();
    st.push(currnum);
  }

  for (int i = 0; i < arr1Size; i++) {
    cout << mp[arr1[i]] << " ";
  }
  cout << endl;
}

int main() {
    int n=3;

    int arr1[3]={2,3,5};


    int k=6;

    int arr2[6]={3,4,2,7,5,9};
   
    nextGreater(arr1, n, arr2, k);
    previousGreater(arr1, n, arr2, k);
    nextSmaller(arr1, n, arr2, k);
    previousSmaller(arr1, n, arr2, k);
    return 0;
}
