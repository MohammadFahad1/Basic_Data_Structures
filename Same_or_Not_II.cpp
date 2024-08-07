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
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
    Node *head = NULL, *tail = NULL;
    int sz = 0;

    void push(int x)
    {
        sz++;
        Node *newNode = new Node(x);
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

    void pop()
    {
        if (tail == NULL)
            return;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
            head = NULL;
        else
            tail->next = NULL;
        delete deleteNode;
        sz--;
    }

    int top()
    {
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return sz == 0;
    }
};

class myQueue
{
    Node *head = NULL, *tail = NULL;
    int sz = 0;

    void push(int x)
    {
        sz++;
        Node *newNode = new Node(x);
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

    void pop()
    {
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
            tail = NULL;
        else
            head->prev = NULL;
        delete deleteNode;
        sz--;
    }

    int front()
    {
        return head->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return sz == 0;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    stack<int> st;
    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    bool flag = true;

    while (!st.empty() && !q.empty())
    {
        if (st.top() != q.front())
        {
            flag = false;
            break;
        }
        st.pop();
        q.pop();
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}