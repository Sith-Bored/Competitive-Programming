#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<long long> arr(n + 1, 0);
    vector<long long> pref(n + 1, 0);
    
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        // Building the prefix sum array
        pref[i] = pref[i - 1] + arr[i];
    }

    long long total_sum = pref[n];

    while (q--) {
        long long l, r, k;
        cin >> l >> r >> k;

        // Sum of the segment [l, r]
        long long current_segment_sum = pref[r] - pref[l - 1];
        
        // Sum of the new segment replacing it
        long long new_segment_sum = (r - l + 1) * k;

        // New total sum = (Original Total) - (Old Segment) + (New Segment)
        long long final_sum = total_sum - current_segment_sum + new_segment_sum;

        if (final_sum % 2 != 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); // Fast I/O is crucial for 2e5 constraints
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}