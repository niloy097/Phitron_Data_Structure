#include<bits/stdc++.h>
using namespace std;
int main()

{

    int n;
    cin >> n;
    if ( n ==  1) cout << 'X' << endl;
    else
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if((i == n / 2 + 1) && j == n / 2 + 1)
                {
                    cout << 'X';
                }
                else if(i == j)
                {
                    cout << '\\';
                }
                else if((i + j == n + 1))
                {
                    cout << '/';
                }
                else
                {
                    cout << " ";
                }
                // cout << 'X';
            }
            cout << endl;
        }
    }
    return 0;
}