#include <iostream>
#include <vector>
using namespace std;

void Merge(int arr[], int start, int mid, int end)
{
    vector<int> temp;
    int left = start;
    int right = mid + 1;

    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else if (arr[right] <= arr[left])
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= end)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = start; i <= end; i++)
    {
        arr[i] = temp[i - start];
    }
}

void MergeSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int mid = (start + end) / 2;

    MergeSort(arr, start, mid);
    MergeSort(arr, mid + 1, end);
    Merge(arr, start, mid, end);
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int start = 0;
    int end = 4;

    MergeSort(arr, start, end);
    for (int i = 0; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}