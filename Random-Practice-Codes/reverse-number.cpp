#include <iostream>
using namespace std;

int main()
{
    int number = 123;
    int temp = number;
    int ans = 0;

    while (temp > 0)
    {
        int digit = temp % 10;

        ans = digit + ans * 10;

        temp = temp / 10;
    }

    cout << ans << endl;
    return 0;
}