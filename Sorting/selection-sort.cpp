#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            if (arr[j] < arr[i])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    return 0;
}