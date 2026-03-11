#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        long long n,k,x;
        cin >> n >> k >> x;
        long long smallest_sum = k*(k+1)/2;
        long long largest_sum = k*n - k*(k-1)/2;
        
        if(k <=n){
            
            if(x >= smallest_sum && x <= largest_sum){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}