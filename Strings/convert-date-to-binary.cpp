#include <iostream>
using namespace std;
string BinaryConversion(int no)
{
    int temp = no;
    string ans = "";
    while (temp > 0)
    {
        int digit = temp % 2;
        ans = to_string(digit) + ans;
        temp = temp / 2;
    }
    return ans == "" ? "0" : ans;
}

string convertDateToBinary(string date)
{
    string tat = "";
    string ans = "";

    for (int i = 0; date[i] != '\0'; i++)
    {
        if (date[i] == '-')
        {
            int num = stoi(tat);
            ans += BinaryConversion(num) + "-";
            tat = "";
        }
        else
        {
            tat += date[i];
        }
    }

    int num = stoi(tat);
    ans += BinaryConversion(num);

    return ans;
}

int main()
{

    return 0;
}