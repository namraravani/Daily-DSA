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

int heightOfTree(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    int left = heightOfTree(root->left);
    int right = heightOfTree(root->right);

    int cnt = max(left, right) + 1;

    return cnt;
}

int main()
{
    return 0;
}