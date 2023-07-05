/*
Constructors                Details                      Time Complexity
-------------------------------------------------------------------------                 
1. list<type>myList;        Construct a list with              O(1)
                            0 elements     
2. list<type>myList(N);     Construct a list with              O(N)
                            N elements and the value
                            will be garbadge
3. list<type>myList(N,V)    Construct a list with              O(N)
                            N elements and the value
                            will be V
4. list<type>myList(list2)  Construct a list by copying        O(N)
                            another list2
5. list<type>myList(A,A+N)  Construct a list by copying        O(N)
                            all elements from an array
                            A of size N

*/

/*
Notes:
1. List is a Doubly Linked List's STL library
2.

*/

//Program:
#include<bits/stdc++.h>
using namespace std;
int main()

{
    //1.
    /* list <int> myList;
    cout << myList.size() << endl; */

    //2. 
    /* list <int> myList(10);
     cout << myList.size() << endl; */

    //3.
    /*list <int> myList(10,5);
    // cout << myList.front() << endl;
    for(auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
        // here .begin() and .end() is a ptr iterator for list STL
    }*/
    //4.
    /*list <int> list2 = {1, 2, 3, 4, 5};
    list <int> myList(list2);
    for(auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    }*/
    //5.
    // int a[5] = {10, 20, 30, 40, 50}; //arr
    vector <int> v = {10, 20, 30, 40, 50}; //vector
    list <int> myList(v.begin(), v.end());
    /*for(auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    }*/
    for(int val : myList)
    {
        cout << val << " ";
    }
    return 0;
}
