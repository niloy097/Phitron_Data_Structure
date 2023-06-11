#include<bits/stdc++.h>
using namespace std;
int main()

{

    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int m;
    cin >> m;
    vector <int> v1(m);
    for(int i = 0; i < m; i++)
    {
        cin >> v1[i];
    }
    int x;
    cin >> x;
    if(x == 0)
    {
        v1.insert(v1.begin()+v1.size(), v.begin(), v.end());
        for(int i = 0; i < v1.size(); i++)
        {
            cout << v1[i]  << " ";
        }
    }
    else
    {
        v.insert(v.begin()+x, v1.begin(), v1.end());
        for(int val : v)
        {
            cout << val << " ";
        }
    }
    return 0;
}