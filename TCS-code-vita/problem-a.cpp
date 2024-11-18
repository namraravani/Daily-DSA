#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<string> arr;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        arr.push_back(temp);
    }

    unordered_map<string, int> mpp;
    string leg1 = arr[0];
    string leg2 = arr[1];
    mpp[leg1] = 1;
    mpp[leg2] = 2;

    int ans = 0;

    for (int i = 2; i < arr.size(); i++)
    {
        if (mpp.find(arr[i]) != mpp.end())
        {

            continue;
        }
        else
        {

            if (mpp[leg1] == 1)
            {
                leg2 = arr[i];
                mpp.clear();
                mpp[leg1] = 1;
                mpp[leg2] = 2;
            }
            else
            {
                leg1 = arr[i];
                mpp.clear();
                mpp[leg1] = 1;
                mpp[leg2] = 2;
            }
            ans++;
        }
    }

    cout << ans;

    return 0;
}
