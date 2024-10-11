#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{

    int res = nums.length;
    for (int i = 0; i < nums.length; i++)
    {
        res ^= i;
        res ^= nums[i];
    }
    return res;
}

int main()
{
    return 0;
}