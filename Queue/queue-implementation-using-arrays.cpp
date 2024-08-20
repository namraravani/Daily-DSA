#include <iostream>
using namespace std;

class Queue
{
public:
    int start;
    int end;
    int size;
    int *arr;
    int currsize = 0;

    Queue(int size)
    {
        start = -1;
        end = -1;
        this->size = size;
        arr = new int[size];
    }

    void enqueue(int data)
    {
        if (currsize == size)
        {
            cout << "Sorry, the Queue is full" << endl;
            return;
        }
        else if (currsize == 0)
        {
            start = end = 0;
        }
        else
        {
            end = (end + 1) % size;
        }
        arr[end] = data;
        currsize++;
    }

    int dequeue()
    {
        if (currsize == 0)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else
        {
            int ele = arr[start];
            if (currsize == 1)
            {
                start = end = -1; 
            }
            else
            {
                start = (start + 1) % size;
            }
            currsize--;
            return ele;
        }
    }

    int front()
    {
        if (currsize == 0)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else
        {
            return arr[start];
        }
    }

    int length()
    {
        return currsize;
    }
};

int main()
{
    Queue q(5);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout << q.front() << endl;
    cout << q.length() << endl;

    return 0;
}
