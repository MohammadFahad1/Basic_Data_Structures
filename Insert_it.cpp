#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int x;
    cin >> x;
    for (int i = 0; i < m; i++)
    {
        a.insert(a.begin() + x + i, b[i]);
    }

    for (int i = 0; i < n + m; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}