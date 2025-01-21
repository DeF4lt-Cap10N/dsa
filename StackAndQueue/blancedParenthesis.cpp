
#include <bits/stdc++.h>
using namespace std;

bool valid(const string& s) { 
    stack<char>st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]); 
        }      
        else {
            if (!st.empty() && 
                ((st.top() == '(' && s[i] == ')') ||
                 (st.top() == '{' && s[i] == '}') ||
                 (st.top() == '[' && s[i] == ']'))) {
                st.pop(); 
            }
            else {
                return false; 
            }
        }
    }
    return st.empty();
}

int main() {
  
    string s = "{()}[]";

    if (valid(s))
        cout << "true";
    else
        cout << "false";
    return 0;
}
