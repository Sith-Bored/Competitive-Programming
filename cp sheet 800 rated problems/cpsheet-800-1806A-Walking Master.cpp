#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,d; 
        cin >>a>>b>>c>>d;
 
        if(d>=b){
            long long x_after_diag = a + (d - b);
 
            if(x_after_diag >= c){
                long long up_right_moves = d - b;
                long long left_moves = x_after_diag - c;
                cout << up_right_moves + left_moves << endl;
            } else {
                cout << -1 << endl;
            }
        } else {
            cout << -1 << endl;
        }
    