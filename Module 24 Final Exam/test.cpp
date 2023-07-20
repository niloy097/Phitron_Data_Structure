#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int roll;
        int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
int main()
{
    int x = 3;
    priority_queue<Student> pq;
    while(x--)
    {
        string name;
        int roll;
        int marks;
        cin >> name >> roll >> marks;
        Student a(name, roll, marks);
    }
    cout << pq.top().name<<" " << pq.top().roll<< " " << pq.top().marks << endl;
    return 0;
}