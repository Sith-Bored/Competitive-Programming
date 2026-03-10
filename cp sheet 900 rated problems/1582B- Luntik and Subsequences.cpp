#define ll long long
#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;
    
    vector<int>arr(n);
    for(int i =0;i<n;i++) cin >> arr[i];
    
    int count1 =0; // to count the no. of ones 
    int count0 = 0; // to count the no. of zeros
    
    for(int i =0;i<n;i++){
        if(arr[i] == 1) count1++;
        
        if(arr[i] == 0) count0++;
    }
    ll diff  = count1*pow(2,count0); // since a zero adds 2 choices and m 1s adds m choices
    cout << diff << endl;
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