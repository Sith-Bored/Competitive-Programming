#include <bits/stdc++.h>
#define ll long long
#define readn for(int i =0;i<n;i++) cin>> arr[i]
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >>n>>a>>b;
        if(a == n && b == n){
            cout << "YES" << endl;
        }else if(a+b+2 <=n){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
 
}