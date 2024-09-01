#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    long int val;
    Person(string name, long int val)
    {
        this->name = name;
        this->val = val;
    }
};

class cmp
{
public:
    bool operator()(Person a, Person b)
    {
        if (a.name > b.name)
            return true;
        else if (a.name < b.name)
            return false;
        else
            return a.val < b.val;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    priority_queue<Person, vector<Person>, cmp> pq;
    while (n--)
    {
        string s;
        long int i;
        cin >> s >> i;
        Person obj(s, i);
        pq.push(obj);
    }

    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().val << endl;
        pq.pop();
    }

    return 0;
}