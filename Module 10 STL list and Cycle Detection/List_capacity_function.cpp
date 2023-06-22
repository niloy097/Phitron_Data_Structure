/*

1. myList.size() // Return the size of the list //O(1)
2. myLst.max_size() // Return the maximum size that the vector can hold //O(1)
3. myList.clear() // Clear the list elements , Do not delete the memory, 
                    // only clear the list. // O(N)
4. myList.empty() // Return true/false if the list is empty or not //O(1)
5. myList.resize() // Change the size of the list O(newListSize-OldListSize)

*/



#include<bits/stdc++.h>
using namespace std;
int main()

{

    list <int> myList = {10, 20, 30};
    // cout << myList.size() << endl;
    // cout << myList.max_size() << endl;
    //myList.clear();
    //cout << myList.size() << endl;
    //cout << myList.empty() << endl;
    // myList.resize(2); //Output: 10, 20
    // myList.resize(5); //Output: 10, 20, 30, 0, 0
    myList.resize(5, 100); //Output: 10, 20, 30, 100, 100

    for(int val : myList)
    {
        cout << val <<  " ";
    }

    return 0;
}