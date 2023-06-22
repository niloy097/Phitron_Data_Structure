/*

1. myList.remove(V) //Remve the value V from the list //O(N)
2. myList.sort() //Sort the list in ascending order// O(NlogN)
3. myList.sort(greater<type>()) //Sort the list in descending order // O(NlongN)
4. myList.unique() //Deletes the duplicate valued from the list.
    //You must sort the list first // O(N), with sort O(NlongN)
5. myList.reverse() //Reverse the list // O(N)


*/

#include<bits/stdc++.h>
using namespace std;
int main()

{

    
    list <int> myList = {1, 20, 3, 3, 20, 1, 2, 20};
    //1. myList.remove(20);
    //2. myList.sort();
    //3. myList.sort(greater<int>()); // here greater<int>() is a compare functn
    //4. Fist need to sort the list
    /*myList.sort();
    myList.unique();*/
    //5.
    myList.reverse();
    for(int val:myList)
    {
        cout << val << " ";
    }

    return 0;
}