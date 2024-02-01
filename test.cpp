#include <iostream>
#include <vector>
using namespace std;


int main() {

 vector<int> v;
 for(int i=0;i<10;i++){
  v.push_back(10);
 }
 cout<<v[100];

  return 0;
}