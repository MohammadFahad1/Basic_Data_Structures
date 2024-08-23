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
        // 1. Q theke ber kore ano
        Node *f = q.front();
        q.pop();

        // 2. Jabotiyo ja kaj ache koro
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

        // 3. Children gulo k push koro
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}

int count_leaf_nodes(Node *root)
{
    if (!root)
        return 0;
    if (!root->left && !root->right)
    {
        return 1;
    }
    else
    {
        int l = count_leaf_nodes(root->left);
        int r = count_leaf_nodes(root->right);
        return l + r;
    }
}

int main()
{
    Node *root = input_binary_tree();
    cout << count_leaf_nodes(root) << endl;

    return 0;
}