#include <bits/stdc++.h>
#define ll long long
#define readn for(int i =0;i<n;i++) cin>> a[i]
using namespace std;
 
int main() {
    int n;
    cin >> n;
    while(n--){
        int a,b;
        cin >> a >> b;
 
        vector<int> arr(a + 2);
        arr[0] = 0; 
 
        for(int i = 1; i <= a; i++){
            cin >> arr[i];
        }
 
        arr[a + 1] = b;
 
        int rec = 0;
 
        for(int i = 1; i <= a + 1; i++){
            if(i == a+1){
            rec = max(rec, 2*abs(arr[i] - arr[i - 1]));
            }else{
                rec = max(rec, abs(arr[i] - arr[i - 1]));
                
            }
        }
 
        cout << rec << endl;
    }
}