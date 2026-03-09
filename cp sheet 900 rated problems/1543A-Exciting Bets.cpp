#define ll long long
#include <bits/stdc++.h>
using namespace std;


void solve(){
    ll a,b;
    cin >> a >> b;
    ll gcd = max(a-b,b-a); // gcd of a and b has to be gcd of a -b.
    
    ll moves = min(b%gcd, gcd - b%gcd); // to check if where the move is near by going up or down
    
    if(a == b){
        cout << 0 << " " << 0 << endl; // for infinite
    }else{
        cout << gcd << " " << moves << endl;
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