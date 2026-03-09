#define ll long long
#include <bits/stdc++.h>
using namespace std;


void solve(){
    ll num;
    bool flag = true; // to keep the check if we get an odd divisor or not
    cin >> num;
    
    while(num!= 1){
        if(num % 2 != 0){
            flag = false; // odd divisor found
            cout << "YES" << endl;
            return; // to end the func and get out of the loop
        }
        num /= 2; // to reduce the num
    }
    if(true){
        cout << "NO" << endl; // if not found
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}