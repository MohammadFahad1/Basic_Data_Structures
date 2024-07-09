#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;

    int count = 0;
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == x)
        {
            count++;
            if (a[mid - 1] == x)
            {
                // Check the left side
                count++;
                break;
            }
            else if (a[mid + 1] == x)
            {
                // Check the right side
                count++;
                break;
            }
        }
        else if (x > a[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    if (count > 1)
        cout << "true";
    else
        cout << "false";

    return 0;
}