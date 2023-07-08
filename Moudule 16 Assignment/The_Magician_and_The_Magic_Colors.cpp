#include<bits/stdc++.h>
using namespace std;
int main()

{

    int t;
    cin >> t;
    stack<char> st;
    stack<char> track;
    stack<char> real;
    while(t--)
    {
        int n;
        cin >> n;
        getchar();
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            if(!st.empty() && ((c == 'R' && st.top() == 'B') || (c == 'B' && st.top() == 'R')))
            {
                char ch = 'P';
                track.push(ch);
                st.pop();
            }
            else if(!st.empty() && ((c == 'R' && st.top() == 'G') || (c == 'G' && st.top() == 'R')))
            {
                char ch = 'Y';
                track.push(ch);
                st.pop();
            }
            else if(!st.empty() && ((c == 'B' && st.top() == 'G') || (c == 'G' && st.top() == 'B')))
            {
                char ch = 'C';
                track.push(ch);
                st.pop();
            }
            else if(!st.empty() && ((c == 'B' && st.top() == 'B') || (c == 'G' && st.top() == 'G')
            || (c == 'R' && st.top() == 'R')))
            {
                st.pop();
            }
            else
            {
                if(i == s.size() - 1)
                {
                    track.push(s[i]);
                }
                else
                {
                    st.push(c);
                }
            }
        }
        while(!track.empty())
        {
            if(real.empty())
            {
                real.push(track.top());
                track.pop();
            }
            else
            {
                char ch = track.top();
                if(ch == real.top())
                {
                    track.pop();
                    real.pop();
                }
                else
                {
                    real.push(ch);
                    track.pop();
                }
            }
        }
        while(!real.empty())
        {
            cout << real.top();
            real.pop();
        }
        cout << endl;
    }

    return 0;
}

