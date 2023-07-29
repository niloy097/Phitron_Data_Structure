#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string sub = "";
    string ans = "";
    int x;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            x = s[i] - '0';
        }
        else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {

            for(int i = 0; i < x; i++)

            {
                ans += sub;
            }
            sub.clear();
            ans.push_back(s[i]);
        }
        else if(s[i] != '+' || s[i] != '-' || s[i] != '*' || s[i] != '/')
        {
            sub += s[i];
            
        }
    }
    for(int i = 0; i < x; i++)

    {
        ans += sub;
    }
    
    cout << ans << endl;
    return 0;
}