/*

Problem Link: https://www.codingninjas.com/studio/problems/maximum-equal-stack-sum_1062571

*/

#include <bits/stdc++.h>
int stkSum (stack<int> st)
{
    int sum = 0;
    while(!st.empty())
    {
        sum = sum + st.top();
        st.pop();
    }
    return sum;
} 
int maxSum(stack<int> &st1, stack<int> &st2, stack<int> &st3) {
    
    int stSum1 = stkSum(st1);
    int stSum2 = stkSum(st2);
    int stSum3 = stkSum(st3);

    while(true)
    {
        if(stSum1 == stSum2 && stSum2 == stSum3) break;
        if(stSum1 >= stSum2 && stSum1 >= stSum3)
        {
            stSum1 -= st1.top();
            st1.pop();
        }
        else if(stSum2 >= stSum1 && stSum2 >= stSum3)
        {
            stSum2 -= st2.top();
            st2.pop();
        }
        else
        {
            stSum3 -= st3.top();
            st3.pop();
        }
    }
    return stSum1;
}

