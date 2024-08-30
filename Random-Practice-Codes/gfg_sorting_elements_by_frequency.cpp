#include <bits/stdc++.h>
using namespace std;

static bool comp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}
vector<int> sortByFreq(vector<int> &arr)
{
    int n = arr.size();
    // Step 1: Count frequencies
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    // Step 2: Convert to list of pairs
    vector<pair<int, int>> temp;
    for (auto it : mp)
    {
        temp.push_back({it.first, it.second});
    }

    // Step 3: Sort by frequency (descending) and by value (ascending)
    sort(temp.begin(), temp.end(), comp);

    // Step 4: Build the result array
    vector<int> ans;
    for (auto it : temp)
    {
        int x = it.first;
        int y = it.second;
        while (y--)
            ans.push_back(x);
    }
    return ans;
}

int main()
{

    return 0;
}