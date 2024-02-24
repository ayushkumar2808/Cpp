#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "a good   example";
    cout << s << endl;

    //BRUTE FORCE
    s += " ";
    stack<string> st;
    string str = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (!str.empty() || str==" ") {

                st.push(str);
                str = "";
            }
        } else {
            str += s[i];
        }
    }
    string ans = "";
    while (!st.empty()) {  // Check if the stack is not empty before accessing top element
        ans += st.top() + " ";
        st.pop();
    }
    ans.pop_back(); // Remove the extra space at the end
    cout << ans;

    //OPTIMAL

    return 0;
}
