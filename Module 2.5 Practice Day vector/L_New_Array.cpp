#include<bits/stdc++.h>
using namespace std;
int main()

{

    int n;
    cin >> n;
    vector<int> v1;
    vector<int> v2;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }
    v2.insert(v2.begin()+v2.size(), v1.begin(), v1.end());
    for(int x : v2)
    {
        cout << x << " ";
    }
    return 0;
}