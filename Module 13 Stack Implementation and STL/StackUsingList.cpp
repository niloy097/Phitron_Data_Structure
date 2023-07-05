#include<bits/stdc++.h>
using namespace std;
class myStack{
    list<int> myList;
    public:
        void push(int val)
        {
            myList.push_back(val);
        }
        void pop()
        {
            myList.pop_back();
        }
        int top()
        {
            return myList.back();
        }
        int size()
        {
            return myList.size();
        }
        bool isEmpty()
        {
            return myList.size() == 0;
        }
};
int main()
{
    myStack st;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while(!st.isEmpty()) // {!st.size()} = {st.size() == false}
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}