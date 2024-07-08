#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    long long int pref[n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
            pref[i] = a[i];
        else
            pref[i] = a[i] + pref[i - 1];
    }

    for (long long int i = n - 1; i >= 0; i--)
    {
        cout << pref[i] << " ";
    }

    return 0;
}