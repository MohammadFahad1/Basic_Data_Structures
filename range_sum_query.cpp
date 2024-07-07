#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, q;
    cin >> n >> q;
    long long int a[n];
    long long int pre[n] = {0};
    for (long long int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i != 0)
            pre[i] = a[i] + pre[i - 1];
        else
            pre[i] = a[i];
    }

    while (q--)
    {
        long long int l, r;
        cin >> l >> r;
        l--;
        r--;
        long long int sum = 0;
        l == 0 ? sum = pre[r] : sum = pre[r] - pre[l - 1];
        cout << sum << endl;
    }

    return 0;
}