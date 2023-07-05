#include<bits/stdc++.h>
using namespace std;
class Stack{
    vector<int> v;
    public:
        int val;
    void push(int val)
    {
        this->v.push_back(val);
    }
    void pop()
    {
        this->v.pop_back();
    }
    int top()
    {
        return this->v.back();
    }
    int size()
    {
        return this->v.size();
    }
    bool isEmpty()
    {
        return this->v.size() == 0;
    }
};
int main()
{

    Stack st;
    st.push(10);
    st.push(20);
    cout << st.top() << endl;
    st.pop();
    st.pop();
    st.pop();
    return 0;
}