#include <iostream>
using namespace std;

void bubbleSort(int arr[], int start, int end)
{
    for (int i = 0; i < end - 1; i++)
    {
        for (int j = 0; j < end - (i + 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j + 1], arr[j]);
            }
        }
    }
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};

    bubbleSort(arr, 0, 5);

    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}