#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_binary_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *left, *right;
        if (l == -1)
            left = NULL;
        else
            left = new Node(l);

        if (r == -1)
            right = NULL;
        else
            right = new Node(r);

        f->left = left;
        f->right = right;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}

void printLeftOuterTree(Node *root)
{
    if (!root)
        return;
    if (root->left)
        printLeftOuterTree(root->left);
    else
        printLeftOuterTree(root->right);
    cout << root->val << " ";
}

void printRightOuterTree(Node *root)
{
    if (!root)
        return;
    cout << root->val << " ";
    if (root->right)
        printRightOuterTree(root->right);
    else
        printRightOuterTree(root->left);
}

int main()
{
    Node *root = input_binary_tree();
    if (root->left)
    {
        printLeftOuterTree(root->left);
        cout << root->val << " ";
        printRightOuterTree(root->right);
    }
    else
    {
        cout << root->val << " ";
        printRightOuterTree(root->right);
    }

    return 0;
}