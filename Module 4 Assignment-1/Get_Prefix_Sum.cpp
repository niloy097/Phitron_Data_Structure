#include<bits/stdc++.h>
using namespace std;
int main()

{

    int n;
    cin >> n;
    vector <long long int> v(n);
    vector <long long int> pre(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    pre[0] = v[0];
    for(int i = 1; i < n; i++)
    {
        pre[i] = v[i] + pre[i - 1];
    }

    reverse(pre.begin(),pre.end());

    for(int i = 0; i < n; i++)
    {
        cout << pre[i] << " ";
    }
    
    return 0;
}