#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> ans;
    map<int, int> map;

    for (int i = 0; i < nums.size(); i++)
    {
        int curr = nums[i];
        int more = target - curr;
        if (map.find(more) != map.end())
        {
            ans.push_back(i);
            ans.push_back(map[more]);
        }
        map[curr] = i;
    }

    return ans;
}

int main()
{

    return 0;
}