#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string n;
        cin >> n;

        int digits = n.length();
        int ans = 9 * (digits - 1);
        ans += n[0] - '0';

        cout << ans << endl;
    }

    return 0;
}