#include<bits/stdc++.h>
using namespace std;
int main()

{
    string s;
    s.l
    int n;
    cin >> n;
    queue<int> qu;
    stack<int> cpyQu;
    queue<int> newQu;
    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        qu.push(val);
    }
    while(!qu.empty())
    {
        int k = qu.front();
        cpyQu.push(k);
        qu.pop();
    }
    while(!cpyQu.empty())
    {
        int k = cpyQu.top();
        newQu.push(k);
        cpyQu.pop();
    }
    while(!newQu.empty())
    {
        cout << newQu.front() << " ";
        newQu.pop();
    }
    return 0;
}