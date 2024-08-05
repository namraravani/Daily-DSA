#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == i && j == 0)
            {
                arr[i][j] == 0;
            }
            else
            {
                arr[i][j] == arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }

    // for(int i=0;i<n;i++)
    // {
    //     for(int )
    // }

    return 0;
}