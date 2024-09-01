#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string Name;
    int Roll;
    int Marks;
    Student(string Name, int Roll, int Marks)
    {
        this->Name = Name;
        this->Roll = Roll;
        this->Marks = Marks;
    }
};

class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.Marks < b.Marks)
            return true;
        else if (a.Marks > b.Marks)
            return false;
        else
            return a.Roll > b.Roll;
    }
};

int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    while (n--)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj = Student(name, roll, marks);
        pq.push(obj);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student obj = Student(name, roll, marks);
            pq.push(obj);
            cout << pq.top().Name << " " << pq.top().Roll << " " << pq.top().Marks << endl;
        }
        else if (c == 1)
        {
            if (pq.size() > 0)
            {
                cout << pq.top().Name << " " << pq.top().Roll << " " << pq.top().Marks << endl;
            }
            else
                cout << "Empty" << endl;
        }
        else if (c == 2)
        {
            if (pq.size() > 0)
                pq.pop();
            if (pq.size() > 0)
            {
                cout << pq.top().Name << " " << pq.top().Roll << " " << pq.top().Marks << endl;
            }
            else
                cout << "Empty" << endl;
        }
    }

    return 0;
}