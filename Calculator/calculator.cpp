#include <iostream>
using namespace std;

int addition(int a, int b)
{
    return a + b;
}
int subtraction(int a, int b)
{
    return a - b;
}
int multiplication(int a, int b)
{
    return a * b;
}
int divison(int a, int b)
{
    return a / b;
}

int calculator(int a)
{
    if(a == -1)
    {
        return -1;
    }

    return calculator(a);
}

int main()
{
    // Creating a calculator app

    int a;
    while (a != -1)
    {
        cout << "Enter the value : ";
        cin >> a;

        char op;
        cout << "Enter the operation that you need to perform : ";
        cin >> op;

        // switch (op)
        // {
        // case '+':
        //     cout << addition(a) << endl;
        //     break;
        // case '-':
        //     cout << subtraction(a) << endl;
        //     break;
        // case '*':
        //     cout << multiplication(a) << endl;
        //     break;
        // case '/':
        //     cout << divison(a) << endl;
        //     break;
        // }
    }

    return 0;
}