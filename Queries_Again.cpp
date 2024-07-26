#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

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

void insert_at_position(Node *&head, Node *&tail, int x, int v)
{
    Node *newNode = new Node(v);
    if (x == 0 && head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else if (x == 0 && head != NULL)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }

    Node *tmp = head;
    for (int i = 1; i < x; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    newNode->prev = tmp;
    tmp->next = newNode;

    if (newNode->next == NULL)
    {
        tail = newNode;
    }
    else
    {
        newNode->next->prev = newNode;
    }
}

void print_linked_list(Node *head, Node *tail)
{
    Node *tmp = head;
    Node *tmp1 = tail;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << "R -> ";
    while (tmp1 != NULL)
    {
        cout << tmp1->val << " ";
        tmp1 = tmp1->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x > size(head))
        {
            cout << "Invalid" << endl;
            continue;
        }

        insert_at_position(head, tail, x, v);

        print_linked_list(head, tail);
    }

    return 0;
}