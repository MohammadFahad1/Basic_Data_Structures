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

void compare_and_show_output(Node *head)
{
    Node *tmp = head;
    long int max = INT_MIN;
    long int min = INT_MAX;
    while (tmp != NULL)
    {
        if (tmp->val > max)
            max = tmp->val;
        if (tmp->val < min)
            min = tmp->val;
        tmp = tmp->next;
    }
    cout << max - min << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        long int val;
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    compare_and_show_output(head);

    return 0;
}