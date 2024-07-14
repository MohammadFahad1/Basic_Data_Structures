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
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_at_head(Node *&head, Node *&tail, long int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

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

int getSize(Node *head)
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

void delete_at_index(Node *&head, Node *&tail, int pos)
{
    Node *tmp = head;
    int size = getSize(tmp);

    if (tmp == NULL)
        return;

    if (pos < 0 || pos >= size)
        return;

    if (pos == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
            tail = NULL;
        return;
    }
    else
    {
        for (int i = 0; i < pos - 1; i++)
        {
            tmp = tmp->next;
        }

        Node *deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        if (tmp->next == NULL)
        {
            tail = tmp;
        }
        delete deleteNode;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        long int v;
        cin >> x >> v;

        if (x == 0)
            insert_at_head(head, tail, v);
        else if (x == 1)
            insert_at_tail(head, tail, v);
        else if (x == 2)
            delete_at_index(head, tail, v);

        print_linked_list(head);
    }

    return 0;
}