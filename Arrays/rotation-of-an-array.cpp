#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int noOfTimes = 3;

    for (int i = 0; i < 3; i++)
    {
        int j = 4;
        int start = 0;
        int temp = arr[j];
        while (j != start)
        {
            arr[j] = arr[j - 1];
            j--;
        }

        swap(temp, arr[start]);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }

    return 0;
}