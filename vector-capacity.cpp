#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    v.resize(2);
    v.resize(7, 50);
    cout << v.size() << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    /*  v.clear();
     cout << v.size() << endl;
     for (int i : v)
     {
         cout << i << " ";
     }

     cout << v[4] << endl; */
    // cout << v.max_size() << endl;
    /* cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;
    v.push_back(20);
    cout << v.capacity() << endl;
    v.push_back(30);
    cout << v.capacity() << endl;
    v.push_back(40);
    cout << v.capacity() << endl;
    v.push_back(50);
    cout << v.capacity() << endl; */

    return 0;
}