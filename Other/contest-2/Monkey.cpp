#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin, s))
    {
        int freq[26] = {0};
        for(int i = 0; i < s.size(); i++)
        {
            int val = s[i] - 'a';
            freq[val]++;
        }
         for(char ch = 'a'; ch <= 'z'; ch++){
            if(freq[ch - 97] > 0){
                for(int k = 0; k < freq[ch - 97]; k++){
                    cout<<ch;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}