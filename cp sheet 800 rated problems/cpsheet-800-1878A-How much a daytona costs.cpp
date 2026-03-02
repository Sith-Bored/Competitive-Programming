#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >>t;
    while(t--){
        int a,b;
        cin >>a>>b;
        vector<int>arr(a);
        for(int i =0;i<a;i++){
            cin >>arr[i];
        }
        bool found = false;
        for(int i =0;i<a;i++){
            if(arr[i]==b){
                found = true;
                cout << "YES" <<endl;
                break;
            }
        }
        if(!found){
            cout << "NO" <<endl;
        }
    }
    return 0;
}