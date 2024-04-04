#include<bits/stdc++.h>
using namespace std;


bool isMatching(char s,char k){

return  ((s == '(' && k == ')') || (s == '[' && k == ']') || (s == '{' && k == '}'));
}

int main(){
  string input = "({[]})()";
  int n = input.length();
  stack<char>st;

  for(int i=0;i<n;i++){
    if(input[i]=='(' || input[i]=='{' || input[i]=='['){
      st.push(input[i]);
    }
    else{
      if(st.empty()){
        cout<<"false";
        return 0;
      }
      if(!isMatching(st.top(),input[i])){
        cout<<"false";
        return 0;
      }
      else{
        st.pop();
      }
    }
  }

    if (!st.empty()) {
        cout << "false"; 
        return 0;
    }

    cout << "true";

  return 0;

}