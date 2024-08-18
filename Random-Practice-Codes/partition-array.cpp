#include <bits/stdc++.h>
using namespace std;

bool canSplit(vector<int> &arr)
{
    int totalSum = 0;
    for (int num : arr)
    {
        totalSum += num;
    }

    int leftSum = 0;
    for (int split = 0; split < arr.size() - 1; split++)
    {
        leftSum += arr[split];
        int rightSum = totalSum - leftSum;

        if (leftSum == rightSum)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    return 0;
}
