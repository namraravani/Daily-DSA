#include <iostream>
using namespace std;

int BinarySearch(int arr[], int s, int e, int key)
{
    int mid = (s + e) / 2;

    if (s > e)
    {
        return -1;
    }

    if (key == arr[mid])
    {
        return mid;
    }

    if (key > arr[mid])
    {
        return BinarySearch(arr, mid + 1, e, key);
    }
    else
    {
        return BinarySearch(arr, s, mid, key);
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    cout << BinarySearch(arr, 0, 4, 4);
    return 0;
}