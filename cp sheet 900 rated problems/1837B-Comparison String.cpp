#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        string str1;
        cin >> str1;
        int maxCount =1;
        int count =1;
        for(int i =0;i<n-1;i++){
            if(str1[i] == str1[i+1]){
                count ++;
            }else{
                maxCount = max(maxCount, count);
                count =1;
            }
            maxCount = max(maxCount, count);
        }
        cout << maxCount +1 << endl;
    }
    return 0;

}