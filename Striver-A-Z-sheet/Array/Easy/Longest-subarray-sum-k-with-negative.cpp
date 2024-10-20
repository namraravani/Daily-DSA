#include <bits/stdc++.h>
using namespace std;

int lenOfLongSubarr(int A[], int N, int K)
{

    unordered_map<int, int> mp;
    int maxLen = 0;
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += A[i];
        if (sum == K)
        {
            maxLen = max(maxLen, i + 1);
        }
        if (mp.find(sum - K) != mp.end())
        {
            maxLen = max(maxLen, i - mp[sum - K]);
        }
        if (mp.find(sum) == mp.end())
        {
            mp[sum] = i;
        }
    }
    return maxLen;
}
int main()
{
    return 0;
}