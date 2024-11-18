#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *createTree(node *&root)
{
    int data;

    cout << "Enter data : ";
    cin >> data;

    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "for left of : " << root->data << " : ";
    root->left = createTree(root->left);
    cout << "for right of : " << root->data << " : ";
    root->right = createTree(root->right);

    return root;
}

void lvlOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);

    node *temp = root;
    while (!q.empty())
    {
        temp = q.front();
        q.pop();

        cout << temp->data << " ";

        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
}

int main()
{
    node *root = NULL;

    createTree(root);
    lvlOrderTraversal(root);

    return 0;
}