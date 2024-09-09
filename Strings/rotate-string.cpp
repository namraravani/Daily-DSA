#include <iostream>
using namespace std;

bool rotateString(string s, string goal)
{

    int n = s.length();

    if (n != goal.length())
        return false;

    int x = 0;
    while (x < n)
    {
        if (s.substr(x, n - x) == goal.substr(0, n - x))
            break;
        else
            x++;
    }

    if (s.substr(0, x) == goal.substr(n - x, n))
        return true;
    else
        return false;
}

int main()
{

    return 0;
}