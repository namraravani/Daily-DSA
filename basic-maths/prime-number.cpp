#include <iostream>
using namespace std;

int main()
{
    int no = 16;
    bool flag = true;
    for (int i = 2; i < no; i++)
    {
        if (no % i == 0)
        {
            flag = false;
            break;
        }
    }

    if (flag == true)
    {
        cout << "No is Prime" << endl;
    }
    else
    {
        cout << "No is Composite" << endl;
    }
    return 0;
}