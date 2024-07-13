#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    long int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, long int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void compare_and_show_output(Node *n1, Node *n2)
{
    Node *Node1 = n1;
    Node *Node2 = n2;
    while (Node1 != NULL && Node2 != NULL)
    {
        if (Node1->val != Node2->val)
        {
            cout << "NO" << endl;
            return;
        }
        Node1 = Node1->next;
        Node2 = Node2->next;
    }

    if (Node1 == NULL && Node2 == NULL)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    Node *N1 = NULL;
    Node *N1Tail = NULL;
    Node *N2 = NULL;
    Node *N2Tail = NULL;

    while (true)
    {
        long int val;
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(N1, N1Tail, val);
    }
    while (true)
    {
        long int val;
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(N2, N2Tail, val);
    }

    compare_and_show_output(N1, N2);

    return 0;
}