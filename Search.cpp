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

void check_if_exist_and_show_output(Node *head, long int x)
{
    Node *tmp = head;
    int i = 0;
    while (tmp != NULL)
    {
        if (tmp->val == x)
        {
            cout << i << endl;
            return;
        }
        else
            i++;
        tmp = tmp->next;
    }
    cout << "-1" << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
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

        long int x;
        cin >> x;
        check_if_exist_and_show_output(head, x);
    }

    return 0;
}