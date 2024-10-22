#include <bits/stdc++.h>
using namespace std;

int longestSubArrayLength(vector<int> a, int k)
{
    unordered_map<int, int> mpp;
    int sum = 0;
    int maxLength = 0;

    for (int i = 0; i < a.size(); i++)
    {
        int left = 0;
        int right = 0;
        long long sum = a[0];
        int maxLen = 0;
        int n = a.size();
        while (right < n)
        {
            while (left <= right && sum > k)
            {
                sum -= a[left];
                left++;
            }
            if (sum == k)
            {
                maxLen = max(maxLen, right - left + 1); 
            }
            right++;
            if (right < n)
                sum += a[right];
        }
    }

    return maxLength;
}

int main()
{
    vector<int> v1{1, 2, 3, 4, 5, 1, 1, 1, 1, 1};
    int k = 5;

    cout << longestSubArrayLength(v1, k) << endl;

    return 0;
}