#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n,count =0,total =0;
        cin >> n;
        vector<int>arr(n);
        for(int i =0;i<n;i++){
            cin >> arr[i];
        }
        for(int i =0;i<n;i++){
            if(arr[i] == 0){
                count++;
            }else{
                if(count > total){
                    total = count;
                }
                count =0;
            }
        }
        if(count > total){
            total = count;
            count =0;
        }
        cout << total << endl;
 
    }
}