/*#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
    if(s.empty()) return false;
    stack<char> st;
    st.push(s.front());
    for(int i = 1; i < s.size(); i++)
    {
        char k = s[i];
        if(st.empty()) st.push(k);
        else
        {
            if((k == 'A' && st.top() == 'B') || (k == 'B' && st.top() == 'A'))
            {
                st.pop();
            }
            else
            {
                st.push(k);
            }
        }
    }
    return st.empty();
    stack<char> st;
    for(char c : s)
    {
        if(c == 'A')
        {
            st.push(c);
        }
        else
        {
            if(st.empty()) return false;
            else
            {
                if(c == 'B' && st.top() == 'A')
                {
                  st.pop();
                }
                else return false;
            }
        }
    }
    return st.empty(); 
}  
int main()

{

    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s;
        cin >> s;
        isValid(s) == true ?
        cout << "YES" << endl: cout << "NO" << endl;
    }
    

    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
bool validOrNot(string s)
{
    stack<char> st;
    for(char c : s)
    {
        if(c == 'A')
        {
            if(!st.empty() && st.top() == 'B')
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        else
        {
            if(!st.empty() && st.top() == 'A')
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
    }
    return st.empty();
}

int main() {
    int t;
    cin >> t;
    getchar();
    while(t--)
    {
        string s;
        cin >> s;
        validOrNot(s) == true ?
        cout << "YES" << endl : cout << "NO" << endl;

    }
    return 0;
}
