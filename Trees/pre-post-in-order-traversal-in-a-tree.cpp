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

node *buildTree(node *&root)
{
    int data;
    cout << "Enter the data : ";
    cin >> data;
    cout << endl;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Insert data for the left of " << data << " ";
    root->left = buildTree(root->left);
    cout << "Insert data for the right of " << data << " ";
    root->right = buildTree(root->right);
    return root;
}

void LevelOrderTraversal(node *root)
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
            cout << endl;
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

void PreorderTraversal(node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    PreorderTraversal(root->left);
    PreorderTraversal(root->right);
}

void InorderTraversal(node *root)
{
    if (root == NULL)
        return;

    InorderTraversal(root->left);
    cout << root->data << " ";
    InorderTraversal(root->right);
}

void PostorderTraversal(node *root)
{
    if (root == NULL)
        return;

    PostorderTraversal(root->left);
    PostorderTraversal(root->right);
    cout << root->data << " ";
}

int main()
{
    node *root = NULL;

    buildTree(root);
    LevelOrderTraversal(root);

    return 0;
}