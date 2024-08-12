#include <bits/stdc++.h>
using namespace std;

int priority(char cs)
{
    unordered_map<char, int> mpp;
    mpp['^'] = 3;
    mpp['*'] = 2;
    mpp['/'] = 2;
    mpp['+'] = 1;
    mpp['-'] = 1;

    if (mpp.find(cs) != mpp.end())
    {
        return mpp[cs];
    }

    return 0;
}

int main()
{
    string s = "a+b*(c^d-e)";
    string ans = "";
    stack<char> st;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            ans += s[i];
        }
        else if (s[i] == '(')
        {
            st.push('(');
        }
        else if (s[i] == ')')
        {

            while (st.top() != '(' && !st.empty())
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && priority(s[i]) <= priority(st.top()))
            {
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    cout << ans << endl;
    return 0;
}