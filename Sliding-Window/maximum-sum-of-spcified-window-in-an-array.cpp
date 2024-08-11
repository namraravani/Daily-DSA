#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {5, 4, 1, 7, 8, 9};

    int k = 2;
    int maxSum = 0;
    int sum = 0;

    for (int i = 0; i < 6; i++)
    {
        sum += arr[i];

        if (i >= k - 1)
        {

            maxSum = max(sum, maxSum);
            sum -= arr[i - k + 1];
        }
    }

    cout << maxSum << endl;
    return 0;
}