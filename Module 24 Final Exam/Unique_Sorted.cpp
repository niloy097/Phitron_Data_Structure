#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        vector<int> v;
        while(n--)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            v.push_back(it->first);
        }
        reverse(v.begin(), v.end());
        for(int val : v) cout << val << " ";
        cout << endl;
        
    }
    return 0;
}