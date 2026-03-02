#include <bits/stdc++.h>
#define ll long long
#define readn for(int i =0;i<n;i++) cin>> arr[i]
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        vector<int>arr(n);
        bool isit = true;
        for(int i =0;i<n;i++){
            cin >> arr[i];
            int is = arr[0];
            if(is !=  arr[i]){
                 isit = false;
            }
        }
        sort(arr.rbegin(),arr.rend());
        if(isit){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
            if(arr[0] == arr[1]){
                cout << arr[0] << " " << arr[n-1] << " ";
                for(int i =1;i<n-1;i++){
                    cout << arr[i] << " ";
                }
            }else{
                for(int i =0;i<n;i++){
                    cout <<arr[i]<<" ";
                }
            }
            cout << endl;
            
        }
    }
    return 0;

}