#include <bits/stdc++.h>
using namespace std;

int longestSubArray(vector<int> arr, int k)
{
    int left = 0;
    int right = 0;
    int sum = arr[0];
    int maxLen = 0;
    int n = arr.size();

    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= arr[left];
            left++;
        }

        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }

        right++;
        if (right < n)
            sum += arr[right];
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