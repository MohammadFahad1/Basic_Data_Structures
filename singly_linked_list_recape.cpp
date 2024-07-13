#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_linked_list(Node *head)
{
    cout << endl;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "Inserted at Head" << endl;
}

void insert_at_tail(Node *&head, Node *&Tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        Tail = newNode;
    }
    Tail->next = newNode;
    Tail = newNode;
    cout << endl
         << "Inserted at Tail" << endl;
}

void delete_at_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deletedNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletedNode;
    cout << endl
         << "Node Deleted" << endl;
}

int main()
{
    Node *head = new Node(5);
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    Node *Tail = e;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    int op;
    cin >> op;
    if (op == 1)
    {
        int pos, val;
        cout << "Enter Position and Value: ";
        cin >> pos >> val;
        if (pos > size(head))
            cout << "Invalid Index";
        else if (pos == 0)
            insert_at_head(head, val);
        else if (pos == size(head))
            insert_at_tail(head, Tail, val);
        else if (pos > 0 && pos <= size(head))
            insert_at_position(head, pos, val);
    }
    else if (op == 2)
    {
        cout << endl
             << "Enter Index to Delete: ";
        int pos;
        cin >> pos;
        if (pos >= size(head))
            cout << endl
                 << "Invalid Index" << endl;
        else
            delete_at_position(head, pos);
    }
    // Print Linked List
    print_linked_list(head);

    return 0;
}