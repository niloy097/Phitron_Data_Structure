//Set functionaties
//1. insert value sortwise
//2. delete value sortwise
//3. remove duplicate value at the time of insertion

#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    set<int> s;
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    for(auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " "; //increasing order(sorted)
    }
    if(s.count(100)) cout << "Availabel" << endl;
    else cout << "Not Available" << endl;
    return 0;
}