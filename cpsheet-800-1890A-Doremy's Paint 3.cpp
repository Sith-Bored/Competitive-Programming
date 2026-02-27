#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        vector<int> arr(a);
        for (int i = 0; i < a; i++) {
            cin >> arr[i];
        }
 
        unordered_map<int, int> numCount;
        for (int i = 0; i < a; i++) {
            numCount[arr[i]]++;
        }
 
        if (numCount.size() == 1) {
            cout << "YES" << endl;
        } else if (numCount.size() == 2) {
            vector<int> freq;
            for (auto &pair : numCount) {
                freq.push_back(pair.second);
            }
            if (abs(freq[0] - freq[1]) <= 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}