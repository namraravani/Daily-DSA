#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input = "My Name is Namra";
    vector<string> ans;
    string str = "";
    string ansstring = "";

    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == ' ')
        {
            ans.push_back(str);
            str = "";
        }
        else
        {
            str += input[i];
        }
    }

    ans.push_back(str);

    for (int i = ans.size() - 1; i >= 0; i--)
    {
        ansstring += ans[i];
        if (i > 0) {
            ansstring += ' ';
        }
    }

    cout << ansstring << endl;
    return 0;
}
