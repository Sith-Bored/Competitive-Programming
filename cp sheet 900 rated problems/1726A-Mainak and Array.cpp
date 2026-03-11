#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (n == 1) {
            cout << 0 << endl;
            continue;
        }

        // Start with the current difference (no rotation)
        int max_diff = arr[n-1] - arr[0];

        for (int i = 0; i < n; i++) {
            // 1: Any adjacent pair (circular)
            max_diff = max(max_diff, arr[i] - arr[(i + 1) % n]);

            // 2: Fix the first element, move arr[i] to the end
            if (i > 0) {
                max_diff = max(max_diff, arr[i] - arr[0]);
            }

            // 3: Fix the last element, move arr[i] to the start
            if (i < n - 1) {
                max_diff = max(max_diff, arr[n - 1] - arr[i]);
            }
        }

        cout << max_diff << endl;
    }
    return 0;
}