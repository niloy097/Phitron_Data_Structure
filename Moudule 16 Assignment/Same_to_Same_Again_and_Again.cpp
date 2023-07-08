#include<bits/stdc++.h>
using namespace std;
bool compare(stack<int> st, queue<int> qu, int sz1, int sz2)
{
    if(sz1 != sz2) return false;
    else
    {
        while(!st.empty())
        {
            if(st.top() != qu.front()) return false;
            st.pop(); qu.pop();
        }
        return true;
    }
}
int main()

{

    int n, m;
    cin >> n >> m;
    stack<int> st;
    queue<int> qu;
    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    for(int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        qu.push(val);
    }
    compare(st, qu, st.size(), qu.size()) == true ?
    cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}