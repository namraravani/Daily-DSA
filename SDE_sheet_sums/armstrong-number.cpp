#include <iostream>
using namespace std;

string armstrongNumber(int n)
{

    string con = to_string(n);
    int ans = 0;

    for (int i = 0; i < con.length(); i++)
    {
        int no = con[i] - '0';
        ans += no * no * no;
    }

    if (n == ans)
    {
        return "true";
    }
    return "false";
}

int main()
{
    int n = 153;

    cout << armstrongNumber(n) << endl;
    return 0;
}