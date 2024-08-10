#include <iostream>
using namespace std;

class StackIm
{
public:
    int top;
    int size;
    int *st;

    StackIm(int size)
    {
        this->size = size;
        top = -1;
        st = new int[size];
    }

    void push(int n)
    {
        if (top >= size - 1)
        {
            cout << "Oops.... Stack is Full";
        }
        else
        {
            top = top + 1;
            st[top] = n;
            cout << "The Element " << n << " Is sucessfully pushed " << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is Empty";
        }
        else
        {
            top = top - 1;
            cout << "The Element Is sucessfully Poped" << endl;
        }
    }

    int peek()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        else
        {
            return st[top];
        }
    }

    int info()
    {
        return top + 1;
    }
};

int main()
{
    StackIm s1(5);

    s1.push(10);
    s1.push(9);
    s1.push(0);
    s1.push(1);
    s1.push(2);
    s1.pop();
    s1.pop();
    s1.pop();
    cout << s1.peek() << endl;

    return 0;
}