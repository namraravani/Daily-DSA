#include <iostream>
using namespace std;

int main()
{
    string s = "Namra";
    int noOfTimes = 3;
    int i = 0;

    while (i < noOfTimes)
    {
        string sub = s.substr(0, s.length() - 1);
        char ch = s[s.length() - 1];
        s = ch + sub;
        i++;
    }

    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }
    return 0;
}