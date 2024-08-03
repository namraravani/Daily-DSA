#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, int> umap;

    umap[1] = 1;
    umap[2] = 1;
    umap[3] = 1;
    umap[4] = 1;
    umap[5] = 1;
    umap[6] = 1;

    for (auto x : umap)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}
