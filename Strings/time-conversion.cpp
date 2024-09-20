#include <iostream>
using namespace std;

string timeConversion(string s)
{
    string tem = s.substr(0, 2);
    int temp = stoi(tem);
    string store = "";

    if (s[8] == 'A')
    {
        if (temp == 12)
        {
            store = "00";
            return store + s.substr(2, 5);
        }
        else
        {
            return s.substr(0, 7);
        }
    }
    else
    {
        if (temp == 12)
        {
            return s.substr(0, 7);
        }
        else
        {
            temp += 12;
            return to_string(temp) + s.substr(2, 5);
        }
    }
}

int main()
{
    string input = "01:00:00PM";
    return 0;
}