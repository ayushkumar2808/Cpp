#include <iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){

    for(int k=n-i;k>=0;k--){
      cout<<" ";
    }
    for(char j='A';j<'A'+i;j++){
       cout<<j;
    }
    for(char j='A'+i;j>='A';j--){
      cout<<j;
    }
    cout<<endl;
  }

  return 0;
}