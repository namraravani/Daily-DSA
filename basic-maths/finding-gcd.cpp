#include <iostream>
using namespace std;

int finding_gcd(int no1, int no2)
{
    if (no1 == no2)
    {
        return no1;
    }
    return no1 > no2 ? finding_gcd(no1 - no2, no2) : finding_gcd(no2 - no1, no1);
}

int main()
{
    cout << finding_gcd(10, 20) << endl;
    return 0;
}