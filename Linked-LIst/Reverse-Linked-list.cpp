#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void InsertionAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
}

void InsertAtTail(Node *&head, int data)
{
    Node *temp = new Node(data);
    Node *trav = head;

    if (trav == NULL)
    {
        head = temp;
    }
    else
    {
        while (trav->next != NULL)
        {
            trav = trav->next;
        }
        trav->next = temp;
    }
}

void InsertAtMiddle(Node *&head, int position, int data)
{
    if (position == 1)
    {
        InsertionAtHead(head, data);
    }
    else
    {
        Node *temp = new Node(data);
        Node *trav = head;
        int cnt = 1;

        while (cnt < position - 1)
        {
            trav = trav->next;
            cnt++;
        }

        temp->next = trav->next;
        trav->next = temp;
    }
}

void PrintLinkedList(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
}

void ReverseLinkedList(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;

    while (curr!= NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    head = prev;

    PrintLinkedList(head);
}

int main()
{

    Node *head = NULL;
    InsertionAtHead(head, 2);
    InsertionAtHead(head, 3);
    InsertionAtHead(head, 4);
    InsertionAtHead(head, 5);
    InsertAtTail(head, 7);
    InsertAtMiddle(head, 5, 10);
    PrintLinkedList(head);
    cout << "Reversed LinkedList" << endl;

    ReverseLinkedList(head);

    return 0;
}