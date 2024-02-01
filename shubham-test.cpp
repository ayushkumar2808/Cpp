// Online C++ compiler to run C++ program online
#include <iostream>
#include<map>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>v1;
    for(int i=0; i<n; i++){
      int a;
      cin>>a;
      v1.push_back(a);
    }
    int m;
    cin>>m;
    vector<int>v2;
    for(int j=0; j<m; j++){
        int a;
        cin>>a;
        v2.push_back(a);
    }
    map<int,int>res;
    for(int i=0; i<max(m,n); i++){
        res[v1[i]]++;
        res[v2[i]]++;
    }
    for(auto it:res){
        cout<<it.first<<" ";
    }
    return 0;
}