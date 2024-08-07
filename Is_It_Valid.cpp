#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string x;
        cin >> x;

        stack<char> st;

        for (char c : x)
        {
            if (!st.empty() && ((c == '0' && st.top() == '1') || (c == '1' && st.top() == '0')))
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }

        if (st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}