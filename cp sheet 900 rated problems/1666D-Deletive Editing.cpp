#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;

    map<char, int> need;
    for (char c : t) need[c]++;

    string result = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        char current = s[i];
        if (need[current] > 0) {
            result += current;
            need[current]--;
        }
    }

    // Because we picked characters backwards, reverse to compare
    reverse(result.begin(), result.end());

    if (result == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
    return 0;
}