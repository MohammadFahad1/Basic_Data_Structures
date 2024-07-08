#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, q;
    cin >> n >> q;
    long long int a[n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    while (q--)
    {
        int x;
        cin >> x;
        bool flag = false;
        int l = 0, r = n - 1;

        // Binary Search
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] == x)
            {
                flag = true;
                break;
            }
            else if (x >= a[mid])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        if (flag)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}