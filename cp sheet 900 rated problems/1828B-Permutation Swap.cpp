#define ll long long
#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i =0;i<n;i++) cin >> arr[i]; // taking input 
    
    int k = abs(arr[0] - 1); // initialsed value of k
	for (int i = 1; i < n; i++){
		k = gcd(k, abs(arr[i] - (i + 1))); // to check for the gcd and from the distance they are orignally
	}
	cout << k << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}