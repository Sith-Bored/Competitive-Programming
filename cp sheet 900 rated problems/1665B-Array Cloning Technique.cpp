#define ll long long
#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;
    
    map<int,int>freq; // to map the values and their freq
    int maxFreq =0; // initialsing the max value and no. of ops
    int ops = 0;
    for(int i =0;i<n;i++){
        int x;
        cin >> x;
        freq[x]++;
        maxFreq = max(maxFreq,freq[x]); // to get the max value
    }
    ops = n - maxFreq; // since it will require least amount of ops
    int current = maxFreq;
    while (current < n) {
        ops++;          // 1 operation to clone
        current *= 2;   // Cloning doubles our available copies of the target
    }
    
    cout << ops << endl;
    
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