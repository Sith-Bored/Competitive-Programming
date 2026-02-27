#include <bits/stdc++.h>
#define ll long long
#define readn for(int i =0;i<n;i++) cin>> a[i]
using namespace std;
 
int main() {
    int n;
    cin >> n;
    while(n--){
        int b,c;
        cin >> b >> c;
        vector<int>arr(b);
        for(int i =0;i<b;i++){
            cin >> arr[i];
        }
        if(b >1 && c == 1){
            if(is_sorted(arr.begin(),arr.end())){
                cout << "YES" << endl;
            }else{
                cout << "NO" <<endl;
            }
        }else{
            cout << "YES"<<endl;
        }
    }
    return 0;
    
 
}