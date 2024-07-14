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

void remove_duplicates_then_show_output(Node *head, Node *&tail)
{
    for (Node *tmp = head; tmp != NULL; tmp = tmp->next)
    {
        for (Node *tmp1 = tmp; tmp1->next != NULL;)
        {
            if (tmp1->next->val == tmp->val)
            {
                Node *deleteNode = tmp1->next;
                tmp1->next = tmp1->next->next;
                if (deleteNode == tail)
                {
                    tail = tmp1;
                }
                delete deleteNode;
            }
            else
            {
                tmp1 = tmp1->next;
            }
        }
    }

    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
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

    remove_duplicates_then_show_output(head, tail);

    return 0;
}