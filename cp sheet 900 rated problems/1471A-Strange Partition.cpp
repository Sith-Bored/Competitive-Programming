#define ll long long
#include <bits/stdc++.h>
using namespace std;


void solve(){
    ll n,x;
    cin >> n >> x;
    
    vector<int>arr(n);
    ll maxValue =0, minValue =0; // intialising the value
    for(int i =0;i<n;i++) {
        cin >> arr[i];
        maxValue += (arr[i] +x -1)/x; // since for max value we should not combine any values and directly round by after dividing with x
        minValue += arr[i]; // combine all the elements
    }
    minValue = (minValue + x -1)/x; // at least rounding up after dividing with x
    
    cout << minValue << " " << maxValue << endl;
    
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