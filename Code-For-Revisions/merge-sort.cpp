#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    vector<int> ans;
    int left = start;
    int right = mid + 1;

    while (left <= mid && right <= end)
    {
        if (arr[left] < arr[right])
        {
            ans.push_back(arr[left]);
            left++;
        }

        if (arr[right] < arr[left])
        {
            ans.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        ans.push_back(arr[left]);
        left++;
    }

    while (right <= end)
    {
        ans.push_back(arr[right]);
        right++;
    }

    for (int i = start; i <= end; i++)
    {
        arr[i] = ans[i - start];
    }
}

void mergeSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int mid = (start + end) / 2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int start = 0;
    int end = 4;

    mergeSort(arr, start, end);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}