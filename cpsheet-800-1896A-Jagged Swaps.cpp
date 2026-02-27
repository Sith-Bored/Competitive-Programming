#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int a;
        cin>>a;
    
        vector<int>arr(a);
        for(int i =0;i<a;i++){
            cin >>arr[i];
        }
        if(is_sorted(arr.begin(),arr.end())){
            cout << "YES" <<endl;
        }
        else if(arr[0] == 1){
            cout <<"YES"<<endl;
        }else{
            cout << "NO" <<endl;
        }
    }
}