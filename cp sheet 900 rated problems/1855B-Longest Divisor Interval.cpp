#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int maxCount =0;
        int count =0;
        for(int i =1;i<=42;i++){
            if(i <= n){
                if( n%i != 0){
                    maxCount = max(count,maxCount);
                    count =0;
                }else{
                    count++;
                }
            }
            maxCount = max(count, maxCount);
        }
        cout << maxCount << endl;
    }
    return 0;

}