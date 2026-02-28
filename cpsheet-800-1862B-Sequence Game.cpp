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
        int a;
        cin >>a;
        vector<int>arr(a);
        for(int i=0;i<a;i++){
            cin >>arr[i];
        }
        vector<int>arr2;
        arr2.push_back(arr[0]);
        for(int i =0;i<a-1;i++){
            if(arr[i]>arr[i+1]){
                arr2.push_back(1);
                arr2.push_back(arr[i+1]);
            }else{
                arr2.push_back(arr[i+1]);
            }
        }
        cout << arr2.size() << endl;
        for(int i =0;i<arr2.size();i++){
            cout << arr2[i] << " ";
        }
        cout << endl;
    }
    return 0;
 