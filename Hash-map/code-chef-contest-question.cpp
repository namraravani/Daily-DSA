#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[16] = {22, 16, 36, 18, 4, 21, 28, 2, 7, 35, 9, 15, 5, 23, 10, 20};
    vector<int> temp;
    vector<int> ans;
    unordered_map<int, int> mpp;

    for (auto ele : arr)
    {
        temp.push_back(ele);
    }

    sort(temp.begin(), temp.end(), greater<int>());

    for (int i = 0; i < 16; i++)
    {
        mpp[temp[i]] = i;
    }

    for (int i = 0; i < 16; i++)
    {
        int position = mpp[arr[i]];
        if (position == 0)
        {
            ans.push_back(4);
        }
        else if (position >= 1 && position <= 8)
        {
            ans.push_back(3);
        }
        else if (position >= 9 && position <= 12)
        {
            ans.push_back(2);
        }
        else if (position >= 13 && position <= 14)
        {
            ans.push_back(1);
        }
        else if (position == 15)
        {
            ans.push_back(0);
        }
    }

    for (int i = 0; i < 16; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}