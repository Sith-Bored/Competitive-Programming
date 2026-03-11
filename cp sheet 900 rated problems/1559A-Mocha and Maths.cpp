#define ll long long
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>arr(n);
    
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    int andValue = arr[0]; // to initialise the value also as 'and' of 2 equal num is that num
    for(int i =0;i<n;i++){
        andValue &= arr[i]; // taking & of as & never increases the value
    }
    cout << andValue << endl; 
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