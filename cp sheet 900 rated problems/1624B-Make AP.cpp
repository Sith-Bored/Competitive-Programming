#define ll long long
#include <bits/stdc++.h>
using namespace std;


void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    
    ll new_a,new_b,new_c;
    new_a = 2*b - c;
    new_b = (a + c)/2;
    new_c = 2*b -a;
    
    bool flag = false;
    
    if(new_a/a > 0 && new_a % a == 0){
        flag = true;
    }
    
    if(new_b/b > 0 && new_b % b == 0 && (c - a) % 2 == 0){
        flag = true;
    }
    
    if(new_c/c > 0 && new_c % c == 0){
        flag = true;
    }
    
    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}