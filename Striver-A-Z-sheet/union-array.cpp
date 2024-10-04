#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        s.insert(arr2[i]);
    }
    vector<int> v(s.begin(), s.end());
    sort(v.begin(), v.end());
    return v;
}

int main()
{
    return 0;
}