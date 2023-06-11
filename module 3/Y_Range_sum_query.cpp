#include<bits/stdc++.h>
using namespace std;
int main()

{
    //worst solution of this problem
    /*int n, q;
    cin >> n >> q;
    int arr[n];
    for(int i = 0; i < n; i++) //TC - O(n) = 10^5
    {
        cin >> arr[i];
    }
    while(q--) // TC - O(q) = 10^5
    {
        int l, r;
        cin >> l >> r;
        l--; r--;
        int sum = 0;
        for(int i = l; i <= r; i++) // TC - O(n) [worst case]
        {
            sum+=arr[i];
        }
        cout << sum <<endl;
    }
    // total = O(n) + O(n * q)
    //       = O(n * q) = 10 ^ 5 * 10 ^ 5 = 10 ^ 10(but required) in range
    // of 10 ^ 7  */

    long long int n, q;
    cin >> n >> q;
    long long int arr[n], pre[n];
    for(int i = 0; i < n; i++) //TC - O(n) = 10^5
    {
        cin >> arr[i];
    }
    pre[0] = arr[0];
    for(int i = 1; i < n; i++) //TC - O(n) = 10^5
    {
        pre[i] = arr[i] + pre[i - 1]; //prefx sum
    }
    while(q--) // TC - O(q) = 10^5
    {
        long long int l, r;
        cin >> l >> r;
        l--; r--;
        long long int sum;
        if(l == 0) sum = pre[r];
        else sum = pre[r] - pre[l-1];
        cout << sum <<endl;
    }
    return 0;
}