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

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }

    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
            tail = NULL;
        else
            head->prev = NULL;
    }

    int front()
    {
        return head->val;
    }

    int size()
    {
        return sz;
    }

    int empty()
    {
        return sz == 0;
    }
};

int main()
{
    myQueue q;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}