#include <bits/stdc++.h>
using namespace std;

void sort012(vector<int> &nums)
{
    int l = 0;
    int m = 0;
    int h = nums.size() - 1;

    while (m <= h)
    {
        if (nums[m] < 1)
        {
            swap(nums[m], nums[l]);
            l++;
            m++;
        }
        else if (nums[m] == 1)
        {
            m++;
        }
        else
        {
            swap(nums[m], nums[h]);
            h--;
        }
    }
}

int main()
{
    vector<int> nums(0, 2);
    sort012(nums);
    return 0;
}