#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (long int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (long int i = 0; i < q; i++)
    {
        long int x;
        cin >> x;
        auto it = find(a.begin(), a.end(), x);
        if (it != a.end())
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}