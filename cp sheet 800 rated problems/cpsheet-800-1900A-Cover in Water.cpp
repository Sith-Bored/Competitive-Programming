#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    while(n--){
        int total =0, count = 0;
        int a;
        cin >> a;
        vector<char> arr(a);
        for(int i = 0; i < a; i++) {
            cin >> arr[i];
        }
        for(int i = 0; i < a; i++) {
            if(arr[i] == '.') {
                count++;
            } else if(arr[i] == '#') {
                if(count > 2) {
                    total = 2;
                    break;
                } else {
                    total += count;
                }
                count = 0;
            }
        }
        if(count > 0) {
            if(count > 2) {
                total = 2;
            } else {
                total += count;
            }
        }
        cout << total << endl;
    }
    return 0;
}
 