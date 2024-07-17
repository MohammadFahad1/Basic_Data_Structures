#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30};
    // list<int> newList;
    /* newList = myList; // 1st way to assign */
    /* newList.assign(myList.begin(), myList.end()); // 2nd way to assign */
    // newList = myList;
    /*
    newList.push_back(100);
    newList.push_front(200);
    newList.pop_back();
    newList.pop_front();
    newList.pop_front();
    */

    // list<int> newList = {100, 200, 300};

    // // myList.insert(next(myList.begin(), 2), {100, 200, 300});
    // myList.insert(next(myList.begin(), 2), newList.begin(), newList.end());
    // // myList.erase(next(myList.begin(), 2));
    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 5));

    // for (int val : myList)
    // {
    //     cout << val << endl;
    // }

    auto it = find(myList.begin(), myList.end(), 40);
    if (it == myList.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    return 0;
}