#include<bits/stdc++.h>
using namespace std;
int main()

{

    stack<int> st;
    stack<int> newSt;
    int n;
    cin >> n;
    for(int i = 0; i < n ;i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    while(!st.empty())
    {
        int k = st.top();
        newSt.push(k);
        st.pop();
    }
    while(!newSt.empty())
    {
        cout << newSt.top() << " ";
        newSt.pop();
    }
    cout << endl;
    return 0;
}