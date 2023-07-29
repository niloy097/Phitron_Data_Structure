#include<bits/stdc++.h>
using namespace std;
void removeConsecutiveZeros(vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) {
        return; // No consecutive zeros to remove
    }

    int j = 0; // Index to keep track of the last non-zero or unique zero element
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0 || (i > 0 && arr[i] == 0 && arr[i - 1] != 0)) {
            arr[j] = arr[i];
            j++;
        }
    }

    arr.resize(j);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        vector<int> v;
        for(int i = 0; i < s.size(); i++)
        {
            int x = s[i] - '0';
            v.push_back(x);
        }
        removeConsecutiveZeros(v);
        for(int val : v) cout << val;
        cout << endl;
        stack<char> qu;
        for(int i = 0; i < s.size(); i++)
        {
            char ch = s[i];
            qu.push(ch);
        }
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 0 && s[i+1] == 0)
            {
                s[i+1] == -1;
            }
        }
        int cnt = 0;
        bool swtch = true;
        while(!qu.empty())
        {
            if(swtch && qu.top() == '1')
            {
                cnt++;
            }
            else if(swtch && qu.top() == '0')
            {
                swtch = false;
            }
            else if(swtch == false && qu.top() == '0'){
                swtch = true;
            }

            qu.pop();
        }
        cout << cnt << endl;
    }
    return 0;
}

