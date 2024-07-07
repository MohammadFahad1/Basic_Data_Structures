#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> a(26, 0);
    int length = s.size();
    for (int i = 0; i < length; i++)
    {
        a[int(s[i]) - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (a[i] != 0)
            cout << char(i + 97) << " : " << a[i] << endl;
    }

    return 0;
}