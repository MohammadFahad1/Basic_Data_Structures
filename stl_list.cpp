#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* list<int> myList; // Declaring a NULL Doubly Linked List using STL List */
    // list<int> list2 = {1, 2, 3, 4, 5};
    // list<int> myList(10, 5);
    // list<int> myList(list2);
    // int a[5] = {10, 20, 30, 40, 50};
    vector<int> v = {100, 200, 300, 400, 500};
    list<int> myList(v.begin(), v.end());

    /* // List Can Only be printed using Iterator for Range Based for Loop
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << endl;
    } */

    for (int val : myList)
    {
        cout << val << endl;
    }

    return 0;
}