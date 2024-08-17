#include<bits/stdc++.h>
using namespace std;


vector<long long int> productExceptSelf(vector<long long int>& nums) {
    int n = nums.size();
    vector<long long int> ans(n, 1);
    long long int left_prod = 1, right_prod = 1;
    
    
    for (int i = 0; i < n; i++) {
        ans[i] *= left_prod;
        left_prod *= nums[i];
    }
    
    
    for (int i = n - 1; i >= 0; i--) {
        ans[i] *= right_prod;
        right_prod *= nums[i];
    }
    
    return ans;
}

int main()
{
    return 0;
    vector<long long int> arr;
    productExceptSelf(arr);

}

