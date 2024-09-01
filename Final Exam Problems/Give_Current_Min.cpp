#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_idx = v.size() - 1;
    while (cur_idx != 0)
    {
        int parent_idx = (cur_idx - 1) / 2;
        if (v[parent_idx] > v[cur_idx])
            swap(v[parent_idx], v[cur_idx]);
        else
            break;
        cur_idx = parent_idx;
    }
}

void delete_heap(vector<int> &v)
{
    if (v.empty())
        return;

    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur = 0;
    while (true)
    {
        int left_idx = cur * 2 + 1;
        int right_idx = cur * 2 + 2;
        int last_idx = v.size() - 1;
        if (left_idx <= last_idx && right_idx <= last_idx)
        {
            // duitai ache
            if (v[left_idx] <= v[right_idx] && v[left_idx] < v[cur])
            {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else if (v[right_idx] <= v[left_idx] && v[right_idx] < v[cur])
            {
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else
            {
                break;
            }
        }
        else if (left_idx <= last_idx)
        {
            // left ache
            if (v[left_idx] < v[cur])
            {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else
            {
                break;
            }
        }
        else if (right_idx <= last_idx)
        {
            // right ache
            if (v[right_idx] < v[cur])
            {
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}

void print_heap(vector<int> v)
{
    if (v.size() > 0)
    {
        cout << v[0] << endl;
    }
    else
    {
        cout << "Empty" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v;
    while (n--)
    {
        long int x;
        cin >> x;
        insert_heap(v, x);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            long int x;
            cin >> x;
            insert_heap(v, x);
            print_heap(v);
        }
        else if (c == 1)
        {
            print_heap(v);
        }
        else if (c == 2)
        {
            delete_heap(v);
            print_heap(v);
        }
    }

    return 0;
}