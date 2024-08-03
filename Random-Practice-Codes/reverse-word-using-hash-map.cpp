#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, string> umap;
    int cnt = 1;

    string str = "";

    string input = "My Name is Namra";

    for (auto x : input)
    {

        if (x == ' ')
        {
            umap[cnt] = str;
            str = "";
            cnt++;
        }
        else
        {
            str += x;
        }
    }

    umap[cnt + 1] = str;

    for (auto x : umap)
    {
        cout << x.second << " ";
    }

    return 0;
}