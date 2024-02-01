#include <iostream>
using namespace std;

int main(){
  int arr[5] = {1,1,2,2,4};

 // BRUTE FORCE
//  pick each num and run a linear search

// BETTER
// use map and return where it.second  == 1


// OPTIMAL

int xorr=0;
for (int i = 0; i < 5; i++)
{
  xorr = xorr^arr[i];
}

cout<<xorr;


  
}