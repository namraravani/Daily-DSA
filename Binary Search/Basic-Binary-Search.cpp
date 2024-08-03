#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    int mid = (s + e) / 2;

    while (s <= e)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        if (key > arr[mid])
        {
            s = mid + 1;
        }
        if (key < arr[mid])
        {
            e = mid;
        }

        mid = (s + e) / 2;
    }

    return -1;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    cout << BinarySearch(arr, 5, 4);
    return 0;
}