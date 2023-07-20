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
        while(n--)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        int cnt = INT_MIN;
        int mx = INT_MIN;
        // for(auto it = mp.begin(); it != mp.end(); it++)
        // {
        //     if(it->second > 1)
        //     {
        //         cout << it->first << " " << it->second << endl;
        //     }
        // }
        // cout << endl << endl;
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            //if(it->second > 1)
            //{
                int x = it->second;
                if(x > cnt)
                {
                    mx = it->first;
                }
                if(x == cnt)
                {
                    mx = it->first;
                }
                cnt = max(cnt, it->second);
                // mx = max(mx, it->first);
                
                
           // }
            
        }
        cout << mx << " " << cnt << endl;
    }
    return 0;
}