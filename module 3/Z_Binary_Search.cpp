#include<bits/stdc++.h>
using namespace std;
int main()

{

    int n, q;
    cin >> n >> q;
    int arr[n];
    for(int i = 0; i <  n; i++) //O(n)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n); //O(n log n)
    while(q--) //O(q)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        bool flag = false;
        while(l <= r) // O(log n)
        {
            int mid = (l+r)/2;
            if(arr[mid] == x)
            {
                flag = true;
                break;
            }
            if(x > arr[mid])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if(flag == true)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
  //O(nlogn)
    return 0;
}