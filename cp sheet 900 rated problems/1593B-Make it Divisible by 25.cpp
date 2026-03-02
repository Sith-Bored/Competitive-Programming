#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9; // A very large number to represent "impossible"

// Helper function to find minimum deletions for a specific 2-digit target
int solve_for_target(string& s, string target) {
    int n = s.length();
    int deletions = 0;
    int ptr = n - 1;

    // Find the second character of the target
    while (ptr >= 0 && s[ptr] != target[1]) {
        ptr--;
        deletions++; // deleting this character
    }

    if (ptr < 0) return INF; // The required digit was never found

    ptr--; // Move one spot to the left of the found character

    //Find the first character of the target (e.g., the '2' in "25")
    while (ptr >= 0 && s[ptr] != target[0]) {
        ptr--;
        deletions++; //deleting this character
    }

    if (ptr < 0) return INF; // The required digit was never found

    return deletions;
}

void solve() {
    string s;
    cin >> s;

    // Check all 4 valid endings and take the minimum deletions required
    int ans = min({
        solve_for_target(s, "00"),
        solve_for_target(s, "25"),
        solve_for_target(s, "50"),
        solve_for_target(s, "75")
    });

    cout << ans << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}