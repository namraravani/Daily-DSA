#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> mpp;
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        int rem = target - nums[i];
        if (mpp.find(rem) != mpp.end())
        {
            ans.push_back(mpp[rem]);
            ans.push_back(i);
        }

        mpp[nums[i]] = i;
    }
    return ans;
}

int main()
{
    vector<int> a{10, 20, 40};
    int k = 30;
    twoSum(a, k);
    return 0;
}