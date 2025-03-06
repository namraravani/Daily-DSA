#include <iostream>
using namespace std;

void insertionSort(int arr[], int start, int end)
{
    for (int i = 1; i < end; i++)
    {
        int curr = arr[i];
        int j = i - 1;
        while (arr[j] >= curr && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = curr;
    }
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};

    insertionSort(arr, 0, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}