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
        int a,total=0;
        cin >>a;
        vector<int>arr(a);
        for(int i =0;i<a;i++){
            cin >> arr[i];
            if(arr[i]%2 ==1){
                total++;
            }
        }
        if(total%2 == 1){
            cout << "NO" << endl;
        }else{
            cout << "YES"<<endl;
        }
    }
    return 0;
 
}