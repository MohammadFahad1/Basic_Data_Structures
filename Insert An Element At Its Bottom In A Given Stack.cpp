#include <bits/stdc++.h>
using namespace std;

stack<int> pushAtBottom(stack<int> &st, int x)
{
    stack<int> newSt;
    while (!st.empty())
    {
        newSt.push(st.top());
        st.pop();
    }
    newSt.push(x);
    while (!newSt.empty())
    {
        st.push(newSt.top());
        newSt.pop();
    }
    return st;
}
