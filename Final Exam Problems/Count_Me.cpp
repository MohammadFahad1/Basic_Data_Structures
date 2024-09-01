#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin.ignore();
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream ss(sentence);
        map<string, int> mp;

        while (ss >> word)
        {
            mp[word]++;
        }

        string maxWord;
        int maxCount = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second > maxCount)
            {
                maxWord = it->first;
                maxCount = it->second;
            }
        }

        cout << maxWord << " " << maxCount << endl;
    }

    return 0;
}
