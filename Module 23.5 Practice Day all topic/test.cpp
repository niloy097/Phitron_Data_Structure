#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp;
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << endl;
    }
    // cout << mp.size() << endl; // return the size after removing the duplicate element
    return 0;
}