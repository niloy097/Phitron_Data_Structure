#include<bits/stdc++.h>
using namespace std;
int main()

{

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> r_a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> r_a[i];
        }
        vector <int> n_a(r_a);
        sort(n_a.begin(), n_a.end());
        bool flag = true;
        for(int i = 0; i < n_a.size(); i++)
        {
            if(r_a[i] != n_a[i])
            {
                flag = false;
                break;
            }
        }
        if(flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}