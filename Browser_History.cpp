#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> myList;
    while (true)
    {
        string v;
        cin >> v;
        if (v == "end")
            break;
        myList.push_back(v);
    }

    int q;
    cin >> q;
    cin.ignore();
    auto cLocation = myList.begin();
    while (q--)
    {
        string visit;
        getline(cin, visit);
        if (visit == "prev")
        {
            if (cLocation == myList.begin())
                cout << "Not Available" << endl;
            else
            {
                --cLocation;
                cout << *cLocation << endl;
            }
        }
        else if (visit == "next")
        {
            if (next(cLocation) == myList.end())
                cout << "Not Available" << endl;
            else
            {
                ++cLocation;
                cout << *cLocation << endl;
            }
        }
        else
        {
            string value = visit.substr(6);
            auto it = find(myList.begin(), myList.end(), value);
            if (it == myList.end())
                cout << "Not Available" << endl;
            else
            {
                cLocation = it;
                cout << *it << endl;
            }
        }
    }

    return 0;
}