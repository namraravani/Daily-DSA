#include <iostream>
using namespace std;

int findPivot(int arr[], int start, int end)
{
    int pivot = arr[start];
    int left = start;
    int right = end;

    while (left < right)
    {
        if (arr[left] <= pivot)
        {
            left++;
        }
        if (arr[right] >= pivot)
        {
            right--;
        }

        if (left < right)
        {
            swap(arr[left], arr[right]);
        }
    }
    swap(arr[start], arr[right]);
    return right;
}

void quickSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int pivot = findPivot(arr, start, end);
    quickSort(arr, start, pivot - 1);
    quickSort(arr, pivot + 1, end);
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};

    int start = 0;
    int end = 4;

    quickSort(arr, start, end);

    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}