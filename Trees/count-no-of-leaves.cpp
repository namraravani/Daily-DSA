#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void inOrder(Node *root, int &count)
{
    if (root == NULL)
    {
        return;
    }

    inOrder(root->left, count);
    if (root->left == NULL && root->right == NULL)
    {
        count++;
    }
    inOrder(root->right, count);
}
int countLeaves(Node *root)
{
    int count = 0;
    inOrder(root, count);
    return count;
    // write code here
}

int main()
{
    return 0;
}