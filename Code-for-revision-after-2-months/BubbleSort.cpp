#include <iostream>
using namespace std;

void bubbleSort(int arr[], int start, int end)
{
    for (int i = start; i < end; i++)
    {
        for (int j = start; j < end - (i); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    int arr[5] = {5, 4, 3, 2, 1};

    bubbleSort(arr, 0, 4);

    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}