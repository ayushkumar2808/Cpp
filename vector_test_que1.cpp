// You are provided with a vector of integers. Then, you are given queries. For the first query, 
// you are provided with an integer, which denotes a position in the vector. The value at this position in the vector
//  needs to be erased. The next query consists of integers denoting a range of the positions in the vector. The elements 
//  that fall under that range should be removed. The second query is performed on the updated vector which we get after 
//  performing the first query. Implement the above in a program.
// Sample input:
// 6 //N
// 1 4 6 2 8 9 //arr elements
// 2 //query1
// 2 3 // query2
// Output:
// 1 8 9

#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int q1;
  int q2,q22;
  cin>>q1;
  cin>>q2;
  cin>>q22;
  auto it = v.begin();
  v.erase(it+2);
v.erase(v.begin() + q2, v.begin() + q22);

  for (int i = 0; i < v.size(); i++)
  {
   cout<<v[i]<<" ";
  }
  

  return 0;
}