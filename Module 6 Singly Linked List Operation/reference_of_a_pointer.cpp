#include<bits/stdc++.h>
using namespace std;
void fun(int * p) // receiving the address of val through by ptr variable p
{
    cout << p << endl; // printing the address of passed address
    *p = 20; // dereferencing the passed address value changing the value
    /*Which will make effect in main function and will change the actual variable value
    if we made any change in this fuction*/

    /*But there will be no effect in main function if we change the p(not deref.) to NULL*/
}
int main()
{

    int val = 10;
    int *ptr =  &val;
    cout << ptr << endl; //address of val
    cout << *ptr << endl;  // value of val
    fun(ptr); // passing the address of val in function
    cout << val << endl;
    cout << *ptr << endl;
    return 0;
}