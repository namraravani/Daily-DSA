#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{

    int j = 0;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[i - 1])
        {
            j++;
            nums[j] = nums[i];
        }
    }

    return j + 1;
}

int main()
{
    return 0;
}