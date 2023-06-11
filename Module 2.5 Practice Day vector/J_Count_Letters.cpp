#include<bits/stdc++.h>
using namespace std;
int main()

{

    char ch;
    vector <int> cnt(26, 0);
    while(scanf("%c", &ch) != EOF)
    {
        int val = ch - 'a';
        cnt[val]++;
    }
    for(char i = 'a'; i < 'z'; i++)
    {
        if(cnt[i-'a'] != 0)
        {
            cout << i << " : " << cnt[i-'a'] << endl;
        }
    }
    return 0;
}