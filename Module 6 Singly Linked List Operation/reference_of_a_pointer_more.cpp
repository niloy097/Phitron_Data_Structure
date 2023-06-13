#include<bits/stdc++.h>
using namespace std;
void fun(int *&p)  // Holding the reference
{
    // p = NULL; // Not any effect in main func. with (*p)
    //we want that if we make a pointer null in this function then 
    // it will change the main func pointer
    // to null also, then we have to pass pointer
    // from calling function with the help of (int *&p)
    /*
    
    fun(ptr) --> void fun(int *p) --> passing by reference
    fun(ptr) --> void fun(int *&p) --> passing by pointer with reference
    if we made funtion with this, thats mean ptr = &p will have same memory 
    location.
    
    */
   cout << &p << endl; // this proves that p == ptr in same location
//    p = NULL;
}
int main()
{
    /*int a = 10
    a = 20;*/

    int val = 10;
    int *ptr =  &val;
    fun(ptr);
    cout << &ptr << endl; //pointer becomes null after changging
    return 0;
}