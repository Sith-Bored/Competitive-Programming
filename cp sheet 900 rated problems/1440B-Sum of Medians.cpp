#define ll long long
#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,k;
    cin >> n >> k;
    int total = n*k;
    ll sum =0;
    vector<int>arr(total);
    
    for(int i =0;i<total;i++) cin >> arr[i];
    
    for(int i =0;i<k;i++){
        sum += arr[total - (i + 1) * (n / 2 + 1)]; // to hit the median we have to go back some steps
    }
    
    cout << sum << endl;
    
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
