#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        auto it1 = find(a.begin(), a.end(), a[i]);
        auto it2 = find(a.begin(), a.end(), a[i] + 1);
        if (it1 != a.end() && it2 != a.end())
        {
            count++;
        }
    }

    cout << count;

    return 0;
}