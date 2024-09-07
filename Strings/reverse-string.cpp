#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input = "Hii I am Namra Ravani";
    string temp = "";
    vector<string> ans1;

    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == ' ')
        {
            ans1.push_back(temp);
            temp = "";
        }
        else
        {
            temp += input[i];
        }
    }
    ans1.push_back(temp);

    for (int i = ans1.size() - 1; i >= 0; i--)
    {
        cout << ans1[i] << " ";
    }
    return 0;
}