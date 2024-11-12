#include <bits/stdc++.h>
using namespace std;

int findPivot(int arr[], int start, int end)
{
    int pivot = arr[start];
    int i = start;
    int j = end;

    while (i < j)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[start], arr[j]);

    return j;
}

void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {

        int pivot = findPivot(arr, start, end);
        quickSort(arr, start, pivot - 1);
        quickSort(arr, pivot + 1, end);
    }
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int start = 0;
    int end = 4;
    quickSort(arr, start, end);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}