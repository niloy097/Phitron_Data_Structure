/*

Problem Link: https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166

*/

//Functional Solution -->>
#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    stack<int> cSt;
    while(!myStack.empty())
    {
        cSt.push(myStack.top());
        myStack.pop();
    }
    cSt.push(x);
    while(!cSt.empty())
    {
        myStack.push(cSt.top());
        cSt.pop();
    }

    return myStack;
}
