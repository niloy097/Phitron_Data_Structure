#include<bits/stdc++.h>
using namespace std;
class myStack{
    vector<int> v;
    public:
        void push(int val)
        {
            v.push_back(val);
        }
        void pop()
        {
            v.pop_back();
        }
        int top()
        {
            return v.back();
        }
        int size()
        {
            return v.size();
        }
        bool isEmpty()
        {
            return v.size() == 0;
        }
};
int main()
{
    myStack st;
    st.push(10);
    st.push(20);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    if(st.isEmpty() == false)
    {
        cout << st.top() << endl;
    }
    return 0;
}