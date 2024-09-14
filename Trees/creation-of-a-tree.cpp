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
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        cout << temp->data << " ";
        q.pop();

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

    buildTree(root);
    LevelOrderTraversal(root);

    return 0;
}