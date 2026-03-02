#define ll long long // used ll to short long long
#include <bits/stdc++.h> 
using namespace std;


void solve(){
    ll x,n; // here x is the start and n is the no.of jumps
    cin >> x >> n;
    ll final; // the final change that will happen
    
    if(n %4 == 1){
        final = -n; // the grasshopper will go back 
    }else if(n%4 == 2){
        final =1; // the grasshopper will go ahead by 1
    }else if(n%4 == 3){
        final = n +1; // the grasshopper will go ahead by n+1
    }else{
        final =0; // net movement will be 0
    }
    
    if(x%2 ==0){
        final +=x; // for even
    }else{
        final = x - final; // for odd
    }
    
    cout << final << endl;
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