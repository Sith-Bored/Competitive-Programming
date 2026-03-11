#define ll long long
#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;
    int count =0;
    
    if(n == 1){
        cout << 0 << endl;
        return;
    }else if(n %3 != 0 ){
        cout << -1 << endl;
        return;
    }else{
        while(n!= 1){
            if(n % 6 == 0){
                n /= 6;
                count++;
            }else if(n % 3 !=0){
                cout << -1 << endl;
                return;
            }else{
                n*= 2;
                count++;
            }
        }
    }
    cout << count << endl;
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