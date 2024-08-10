#include <iostream>
using namespace std;

int Findindex(int arr[], int start, int end)
{
    int piviot = arr[start];
    int i = start;
    int j = end;

    while (i < j)
    {
        while (arr[i] <= piviot)
        {
            i++;
        }
        while (arr[j] > piviot)
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

void QuickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int Pi = Findindex(arr, start, end);
        QuickSort(arr, start, Pi - 1);
        QuickSort(arr, Pi + 1, end);
    }
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int start = 0;
    int end = 4;

    QuickSort(arr, start, end);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}