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

void insert_at_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void check_if_palindrome(Node *head, Node *tail)
{
    Node *tmp = head;
    Node *tmp1 = tail;
    bool flag = true;
    while (tmp != NULL)
    {
        if (tmp->val != tmp1->val)
        {
            flag = false;
            break;
        }
        tmp = tmp->next;
        tmp1 = tmp1->prev;
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        insert_at_tail(head, tail, v);
    }

    check_if_palindrome(head, tail);

    return 0;
}