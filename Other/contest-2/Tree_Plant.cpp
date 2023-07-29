#include<bits/stdc++.h>
using namespace std;
int main()
{
    int val;
    cin >> val;
    if(val == 1) cout << val << endl;
    else if(val == 2 ) cout << val << endl;
    else
    {
        int x = 2;
        int y = 1;
        int sum = 0;
        int diff = val - 2;
        cout << diff << endl;
        int node_val = (val * val)/2;
        cout << node_val << endl;
        for(int i = 1; i <= diff; i++)
        {
            y *= 2;
        }
        cout << y << endl;
        for(int i = 1; i <= y; i++)
        {
            sum += node_val;
        }
        cout << sum << endl;
    }


}