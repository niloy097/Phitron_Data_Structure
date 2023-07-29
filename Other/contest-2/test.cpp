#include <iostream>
#include <vector>
using namespace std;

void removeConsecutiveZeros(vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) {
        return; // No consecutive zeros to remove
    }

    int j = 0; // Index to keep track of the last non-zero or unique zero element
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0 || (i > 0 && arr[i] == 0 && arr[i - 1] != 0)) {
            arr[j] = arr[i];
            j++;
        }
    }

    arr.resize(j);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n;) {
        
    }
    cout << endl;

    removeConsecutiveZeros(arr);

   
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}