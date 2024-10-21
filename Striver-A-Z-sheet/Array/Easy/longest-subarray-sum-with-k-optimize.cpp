#include <bits/stdc++.h>
using namespace std;

int longestSubArray(vector<int> arr, int k)
{
    unordered_map<int, int> mpp;
    int sum = 0;
    int maxLen = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }
        int rem = sum - k;

        if (mpp.find(rem) != mpp.end())
        {
            int len = i - mpp[rem];
            maxLen = max(maxLen, len);
        }

        if (mpp.find(sum) == mpp.end())
        {
            mpp[sum] = i;
        }
    }

    return maxLen;
}

int main()
{
    vector<int> v1{10, 20, 30, 40, 50};
    int k = 90;
    cout << longestSubArray(v1, 90) << endl;
    return 0;
}