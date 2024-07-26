#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> n;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        n.push_back(v);
    }

    n.sort();
    n.unique();

    for (int v : n)
    {
        cout << v << " ";
    }

    return 0;
}