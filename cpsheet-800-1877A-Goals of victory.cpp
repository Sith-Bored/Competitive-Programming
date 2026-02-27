#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t,a,b,count =0;
    cin >>t;
    while(t--){
        cin >> a;
        for(int i =1;i<a;i++){
            cin >>b;
            count += b;
        }
        if(count>0){
            cout << -count<<endl;
        }else{
            cout << -count<<endl;
        }
        count =0;
    }
    return 0;
}