/*

1. myList = or myList.assign(list.begin(), list.end()) //Assign another list //O(n)
2. myList.push_back() // Add an element to the tail //O(1)
3. myList.push_front() // Add an element to the head //O(1)
4. myList.pop_back() // Delete the tail // O(1)
5. myList.pop.front() // Delete the head // O(1)
6. myList.insert() // insert at element at a specific position //O(N+K)
   //where K is the number of elements to be inserted 
7. myList.erase() // Delete element from a specific position //O(N+K)
    //where K is the number of elements to be deleted
8. replace(myList.begin(),myList.end(), value, replace_value) //Replace all
   // the value with replace_value. Not under a list STL // O(N)
9. find(myList.begin(), myList.end(), V) // Find the value V. Not Under
  // a list STL. // O(N)



*/


#include<bits/stdc++.h>
using namespace std;
int main()

{

    //1.
    /*list <int> myList = {10, 20, 30};
    list <int> newList;
    // newList = myList;
    newList.assign(myList.begin(), myList.end());
    for(int val : newList)
    {
        cout << val << " ";
    }*/
    //2.
    /*list <int> myList = {10, 20, 30};
    myList.push_back(100);
    for(int val : myList)
    {
        cout << val << " ";
    }*/

    //3.
    /*list <int> myList = {10, 20, 30};
    myList.push_front(130);
    for(int val : myList)
    {
        cout << val << " ";
    }*/
    //4.
    /*list <int> myList = {10, 20, 30};
    myList.pop_back();
    for(int val : myList)
    {
        cout << val << " ";
    }*/

    //5.
    /*list <int> myList = {10, 20, 30};
    myList.pop_front();
    for(int val : myList)
    {
        cout << val << " ";
    }*/
    //6.
    /*list <int> myList = {10, 20, 30}; 
    // myList.insert(next(myList.begin(), 2), 100); //Single val insert
    // myList.insert(next(myList.begin(), 3), {1, 2, 3, 4}); //Multiple val insert
    list <int> newList = {3, 4, 3, 2, 4};
    vector <int> v = {1, 2, 3, 4};
    int arr[5] = {12, 3, 5 ,2, 5};
    //List insert
    // myList.insert(next(myList.begin(), 1), newList.begin(), newList.end());
    //vector insert
    // myList.insert(next(myList.begin(), 1), v.begin(), v.end());
    //Array insert
    myList.insert(next(myList.begin(), 1), arr, arr+5);
    for(int val : myList)
    {
        cout << val << " ";
    }*/
    //7.
    /*list <int> myList = {10, 20, 30, 34, 12, 11};
    // myList.erase(next(myList.begin(), 4)); //Single val delete
    //Multiple value delete
    myList.erase(next(myList.begin(), 2), next(myList.begin(), 5));
    for(int val : myList)
    {
        cout << val << " ";
    }*/

    //8.
    /*list <int> myList = {10, 20, 30, 30, 12, 30};
    replace(myList.begin(), myList.end(), 30, 100);
    for(auto it = myList.begin(); it != myList.end(); it ++)
    {
        cout << *it <<  " ";
    }*/
    list <int> myList = {10, 20, 30, 30, 12, 30};
    auto it = find(myList.begin(), myList.end(), 30);
    if(it == myList.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }
    return 0;
}