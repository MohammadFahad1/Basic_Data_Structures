#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < q; i++)
    {
        long int l, r;
        cin >> l >> r;
        long int sum = 0;
        for (long int i = l - 1; i < r; i++)
        {
            sum += a[i];
        }
        cout << sum << endl;
    }

    return 0;
}