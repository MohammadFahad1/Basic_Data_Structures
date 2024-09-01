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
        set<long int> a;
        for (int i = 0; i < n; i++)
        {
            long int x;
            cin >> x;
            a.insert(x);
        }

        for (long int val : a)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}