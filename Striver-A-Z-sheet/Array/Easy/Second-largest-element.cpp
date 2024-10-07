#include <iostream>
#include <vector>
using namespace std;

int getSecondLargest(vector<int> &arr)
{
    
    int maxi = INT_MIN;
    int maxi1 = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {

        if (maxi < arr[i])
        {
            maxi = arr[i];
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[i] == maxi)
        {
            continue;
        }
        else if (maxi1 < arr[i])
        {

            maxi1 = arr[i];
        }
    }
    if (maxi1 == INT_MIN)
    {
        return -1;
    }

    return maxi1;
}

int main()
{
    return 0;
}