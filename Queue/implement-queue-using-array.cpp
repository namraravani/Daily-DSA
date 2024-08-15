#include <iostream>
using namespace std;

class Queue
{
public:
    int start;
    int end;
    int *arr;
    int size;

    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        start = -1;
        end = -1;
    }

    // Enqueue operation to add elements to the queue
    void enqueue(int value)
    {
        if (end == size - 1)
        {
            cout << "Queue is full" << endl;
            return;
        }
        if (start == -1)
            start = 0;
        arr[++end] = value;
    }

    // Dequeue operation to remove elements from the queue
    int dequeue()
    {
        if (start == -1 || start > end)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int value = arr[start++];
        if (start > end) // Reset the queue if it's empty
        {
            start = -1;
            end = -1;
        }
        return value;
    }

    // Peek operation to view the front element
    int peek()
    {
        if (start == -1 || start > end)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[start];
    }

    // Check if the queue is empty
    bool isEmpty()
    {
        return start == -1 || start > end;
    }

    // Destructor to free allocated memory
    ~Queue()
    {
        delete[] arr;
    }
};

int main()
{
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    
    

    cout << "Front element is: " << q.peek() << endl;

    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;

    cout << "Front element is: " << q.peek() << endl;

    q.enqueue(60);

    cout << "Front element is: " << q.peek() << endl;

    while (!q.isEmpty())
    {
        cout << "Dequeued: " << q.dequeue() << endl;
    }

    return 0;
}
