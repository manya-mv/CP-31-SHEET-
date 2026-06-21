#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int negative = 0, positive = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x == -1)
                negative++;
            else
                positive++;
        }

        int sum = positive - negative;
        int operations = 0;
        while (sum < 0) {
            sum += 2;
            negative--;
            positive++;
            operations++;
        }
        if (negative % 2 == 1) {
            operations++;
        }

        cout << operations << '\n';
    }

    return 0;
}