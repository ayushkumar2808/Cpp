#include<bits/stdc++.h>
using namespace std;

int evaluatePostfix(string str){
    stack<int>s;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='0'&&str[i]<='9'){
            s.push(str[i]-'0');
        }
        else{
            int b=s.top();
            s.pop();
            int a  = s.top();
            s.pop();
            if(str[i]=='+'){
                s.push(a+b);
            }
            else if(str[i]=='*'){
                s.push(a*b);
            }
            else if(str[i]=='-'){
                s.push(a-b);
            }
            else{
                s.push(a/b);
            }
        }
    }
    return s.top();
}



int main(){
    string str;
    cin>>str;
    cout<<evaluatePostfix(str);
    return 0;
}