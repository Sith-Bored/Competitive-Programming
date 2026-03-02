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
        int n;
        cin >>n;
        vector<int>arr(n);
        for(int i =0;i<n;i++){
            cin >>arr[i];
        }
        bool flag = false;
        for(int i =0;i<n;i++){
            for(int j =i+1;j<n;j++){
                if(gcd(arr[i],arr[j]) <=2){
                    flag = true;
                    break;
                }
            }
        }
        if(flag){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
 
}