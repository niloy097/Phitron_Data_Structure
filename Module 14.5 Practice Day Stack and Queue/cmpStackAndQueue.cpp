#include<bits/stdc++.h>
using namespace std;
bool isStQuSame(stack<int>& st, queue<int>& qu, int sz1, int sz2)
{
    if(sz1 == sz2)
    {
        while(!st.empty())
        {
            int a = st.top(), b = qu.front();
            if(a != b) return false;
            st.pop(), qu.pop();
        }
        return true;
    }
    else
    {
        return false;
    }
}
int main()

{

    int n;
    cin >> n;
    stack<int> st;
    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    
    int m;
    cin >> m;
    queue<int> qu;
    for(int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        qu.push(val);
    }
    
    isStQuSame(st, qu, st.size(), qu.size()) == true ?
    cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}