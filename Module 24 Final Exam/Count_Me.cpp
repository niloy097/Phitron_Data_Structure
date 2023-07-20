#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    getchar();
    while(t--)
    {
        string s;
        getline(cin, s);
        map<string, int> mp;
        string word;
        stringstream ss(s);
        string track;
        int cnt = 0;
        while(ss >> word)
        {
            mp[word]++;
            if(mp[word] > cnt)
            {
                cnt = mp[word];
                track = word;
            }
        }
        cout << track << " " << cnt << endl;
    }
    return 0;


}




