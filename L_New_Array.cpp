#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<int> c(b);
    for (int i : a)
    {
        c.push_back(i);
    }

    for (int i : c)
    {
        cout << i << " ";
    }

    return 0;
}