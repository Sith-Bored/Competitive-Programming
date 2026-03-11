#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int>arr(n);
        for(int i =0;i<n;i++){
            cin >> arr[i];
        }
        
        sort(arr.begin(), arr.end());
        int count =0;
        int maxCount =0;
        for(int i =0;i<n-1;i++){
            int diff = arr[i+1] - arr[i];
            if(diff <= k){
                count++;
            }else{
                maxCount = max(maxCount, count);
                count =0;
            }
            maxCount = max(maxCount,count);
        }
        cout << n - maxCount -1  << endl;
    }
    return 0;

}