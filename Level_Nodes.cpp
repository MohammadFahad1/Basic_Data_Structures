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

int maxHeight(Node *root)
{
    if (!root)
        return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l, r) + 1;
}

void printLevelNodes(Node *root, int x)
{
    if (!root)
        return;
    int depth = maxHeight(root);
    if (x == 0)
    {
        cout << root->val << endl;
    }
    else if (x > depth - 1)
    {
        cout << "Invalid" << endl;
    }
    else
    {
        queue<pair<Node *, int>> q;
        q.push({root, 0});
        while (!q.empty())
        {
            pair<Node *, int> f = q.front();
            q.pop();
            Node *node = f.first;
            int level = f.second;

            // Ja kaj korar korbo
            if (level == x)
            {
                cout << node->val << " ";
            }

            if (node->left)
                q.push({node->left, level + 1});
            if (node->right)
                q.push({node->right, level + 1});
        }
    }
}

int main()
{
    Node *root = input_binary_tree();
    int x;
    cin >> x;
    printLevelNodes(root, x);

    return 0;
}