#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >>a;
        int result =0;
        for(int i =0;i<a;i++){
            int b;
            cin >> b;
            result  ^=b; 
        }
        if(a %2 == 0){
            if(result == 0){
                cout << result << endl;
            }else {
                cout << -1 << endl;
            }
        }else{
        cout << result << endl;
        }
    }
    return 0;
    
}