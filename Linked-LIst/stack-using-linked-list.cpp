#include <iostream>
using namespace std;

class Queue
{
public:
    int size;
    int front = -1;
    int rear = -1;
    int *arr;

    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
    }

    void Enqueue(int data)
    {
        if (front == -1 || rear == -1)
        {
            front = rear = 1;
            arr[rear] = data;
        }
        else
        {
            rear = (rear % size) + 1;
            arr[rear] = data;
        }
    }
};

int main()
{
    return 0;
}