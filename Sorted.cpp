#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i < n; i++)
        {
            if (a[i - 1] > a[i])
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}