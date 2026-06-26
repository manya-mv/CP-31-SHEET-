#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;   
            arr[i] = x;
        }
        sort(arr.begin(), arr.end());

        if (arr[0] == arr[n - 1]) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            cout << arr[n - 1] << " ";
            for (int i = 0; i < n - 1; i++)
                cout << arr[i] << " ";
            cout << '\n';
        }
        
    }
}