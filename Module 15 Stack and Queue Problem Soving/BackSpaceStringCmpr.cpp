/*

Problem Link: https://leetcode.com/problems/backspace-string-compare/description/

*/

//Solution with class implementation--->

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<char> a;
        stack<char> b;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '#' && a.empty()) continue;
            if(s[i] == '#') a.pop();
            else a.push(s[i]);
        }
        for(int i = 0; i < t.size(); i++)
        {
            if(t[i] == '#' && b.empty()) continue;
            if(t[i] == '#') b.pop();
            else b.push(t[i]);
        }

        if(a.size() != b.size()) return false;
        else
        {
            while(!a.empty())
            {
                if(a.top() != b.top()) return false;
                a.pop(), b.pop();
            }
            return true;
        }
    }
};