#include <bits/stdc++.h>
using namespace std;

int Precedence(char ch)
{
    if (ch == '^')
        return 3;
    else if (ch == '/' || ch == '*')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return 0;
}

string infixToPostfix(string str)
{
    string result = "";
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            result += str[i];
        }
        else if (str[i] == '(')
        {
            s.push(str[i]);
        }
        else if (str[i] == ')')
        {
            while (!s.empty() && s.top() != '(')
            {
                result = result + s.top();
                s.pop();
            }
            s.pop();
        }
        else
        {
            while (!s.empty() && Precedence(str[i]) <= Precedence(s.top()))
            {
                result = result + s.top();
                s.pop();
            }
            s.push(str[i]);
        }
    }

    while (!s.empty())
    {
        if (s.top() == '(')
            return "Invalid expression";
        result = result + s.top();
        s.pop();
    }

    return result;
}

int main()
{
    string str;
    cin >> str;

    // getline(cin, str);
    cout << infixToPostfix(str);
    return 0;
}