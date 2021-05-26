#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string reverseParentheses(string s)
{
    stack<char> st;
    string t;
    for (char c : s)
    {
        if (c == '(')
            st.push(c);
        else if (c == ')')
        {
            t = "";
            while (st.top() != '(')
            {
                t += st.top();
                st.pop();
            }
            st.pop();
            for (char c1 : t)
                st.push(c1);
        }
        else
        {
            st.push(c);
        }
    }

    t = "";
    while (!st.empty())
    {
        t += st.top();
        st.pop();
    }
    reverse(t.begin(), t.end());
    return t;
}
int main()
{
    string s = "(abcdefghi(jhklo)vjvh)";
    cout << reverseParentheses(s) << endl;
    return 0;
}