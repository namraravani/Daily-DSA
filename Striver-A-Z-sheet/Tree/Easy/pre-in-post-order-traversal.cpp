#include <iostream>
#include <queue>
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

    cout << "for the left of " << root->data << " ";
    root->left = createTree(root->left);

    cout << "for the right of " << root->data << " ";
    root->right = createTree(root->right);

    return root;
}

void preOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
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
}

int main()
{
    node *root = NULL;
    createTree(root);
    cout << "preOrder Traversal : ";
    preOrder(root);
    cout << endl;

    cout << "InOrder Traversal : ";
    postOrder(root);
    cout << endl;

    cout << "PostOrder Traversal : ";
    inOrder(root);
    cout << endl;

    cout << "LevelOrder Traversal :";
    levelOrderTraversal(root);
    cout << endl;
    return 0;
}