#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    set<int> s;
    while(q--)
    {
        int c;
        cin >> c;
        if(c == 1)
        {
            int val;
            cin >> val;
            s.insert(val);
        }
        else if(c == 2)
        {
            int val;
            cin >> val;
            s.erase(val);
        }
        else
        {
            int val;
            cin >> val;
            if(s.count(val)) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}