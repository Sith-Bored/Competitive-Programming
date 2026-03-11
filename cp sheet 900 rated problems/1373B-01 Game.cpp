#define ll long long
#include <bits/stdc++.h>
using namespace std;


void solve(){
    string binary;
    cin >> binary;
    
    
    int count_1 =0;
    int count_0 =0;
    int len = binary.length();
    for(int i =0;i<len;i++){
        if(binary[i] == '1'){
            count_1++;
        }else{
            count_0++;
        }
    }
    int least = min(count_0,count_1);
    if(least == 0){
        cout << "NET" << endl;
    }else{
        if(least % 2==0){
            cout << "NET" << endl;
        }else{
            cout << "DA" << endl;
        }
    }
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