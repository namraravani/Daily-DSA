#include <bits/stdc++.h>
using namespace std;

vector<string> uncommonFromSentences(string s1, string s2)
{

    unordered_map<string, int> mpp;
    vector<string> ans;

    string str = s1 + " " + s2;
    string temp = "";

    for (auto &x : str)
    {
        if (x == ' ')
        {
            mpp[temp]++;
            temp = "";
        }
        else
        {
            temp += x;
        }
    }

    mpp[temp]++;

    for (auto &x : mpp)
    {
        if (x.second == 1)
        {
            ans.push_back(x.first);
        }
    }

    return ans;
}

int main()
{

    return 0;
}
