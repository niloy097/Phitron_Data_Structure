//insertAtMinHeap
#include<bits/stdc++.h>
using namespace std;
int main()

{
    vector<int> minHeap;
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++)
    {
        
        int insert;
        cin >> insert;
        minHeap.push_back(insert);
        int cur_idx = minHeap.size() - 1;
        while(cur_idx != 0)
        {
            int parent = (cur_idx - 1) / 2;
            if(minHeap[parent] > minHeap[cur_idx])
                swap(minHeap[parent] , minHeap[cur_idx]);
            else
                break;
            cur_idx = parent;
        }
    }
    for(int val : minHeap) cout << val << " ";


    return 0;
}