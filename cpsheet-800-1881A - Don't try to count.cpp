#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int count = 0;
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
 
        bool found = false; 
 
        for (int i = 0; i < 6; i++) {
            if (a.find(b) != string::npos) {
                cout << count << endl;
                found = true;
                break;
            }
            a += a;
            count++;
        }
 
        if (!found) {
            cout << -1 << endl;
        }
    }
    return 0;
}