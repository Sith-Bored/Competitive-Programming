#define ll long long
#include <bits/stdc++.h>
using namespace std;


void solve(){
    string str1;
    cin >> str1;
    int n = str1.length();
    str1[0] = str1[n-1];
    // since 1 seqn is "ab" and the other is "ba"
    // we know that "aba" and "bab" is always equal therefore the first and last element should be same and rest can be any it wont matter
    cout << str1 << endl;
    
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