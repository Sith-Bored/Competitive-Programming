#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int a;
        string s;
        cin >>a;
        cin >> s;
        vector<int> arr(a);
        for(int i =0;i<a;i++){
            arr[i] = s[i] -'0';
        }
        int count =0;
        for(int i =0;i<a/2;i++){
            if(abs(arr[i] - arr[a-1-i]) == 1){
                count++;
            }else{
                break;
            }
        }
        cout << a - 2*count << endl;
    }
    return 0;
   