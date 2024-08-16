#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int maxi = 0;

    int cnt = 0;

    if (nums.size() == 1)
    {
        return nums[0];
    }
    else if (nums.size() == 2)
    {

        if (nums[0] == nums[1])
        {
            return nums[0] + nums[1];
        }
        else
        {
            return 1;
        }
    }

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == 1 && nums[i + 1] == 1)
        {
            cnt++;
        }
        else
        {
            cnt = 0;
        }
        maxi = max(cnt, maxi);
    }
    return maxi + 1;
};

int main()
{

    vector<int> arr = {1, 0, 1, 1, 1};

    cout << findMaxConsecutiveOnes(arr);
    return 0;
}