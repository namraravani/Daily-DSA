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
        int start = -1;
        int end = -1;
    }
};
int main()
{

    return 0;
}