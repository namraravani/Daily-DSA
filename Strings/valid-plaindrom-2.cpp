#include <iostream>
using namespace std;
bool validPalindrome(string s)
{

    int i = 0;
    int j = s.length() - 1;
    int cnt = 0;

    while (i <= j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else if ((i + 1) == j || (j - 1) == i)
        {

            return true;
        }
        else
        {
            cnt++;
            if (cnt > 1)
            {
                return false;
            }
            if (s[i + 1] == s[j])
            {
                i++;
            }
            else if (s[j - 1] == s[i])
            {
                j--;
            }
        }
    }

    return true;
}

int main()
{
    return 0;
}