/*

1. myList.back() // Access the tail element //O(1)
2. myList.front() // Access the head elemnet // O(1)
3. next(myList.begin(), i) // Access the i'th Element // O(N)

*/

#include<bits/stdc++.h>
using namespace std;
int main()

{

    list <int> myList = {10, 20, 30};
    //1. cout << myList.front() << endl;
    //2. cout << myList.back() << endl;
    cout << *next(myList.begin(), 1) << endl; // next(myList.begin() returns a iterator(ptr)
    return 0;
}