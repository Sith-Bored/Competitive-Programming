#include <bits/stdc++.h>
#define ll long long
#define readn for(int i =0;i<n;i++) cin>> arr[i]
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int count=0,total =0;
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i =0;i<n;i++){
            cin >> arr[i];
            if(arr[i] == 2){
                total++;
            }
        }
        for(int i =0;i<n;i++){
            if(total %2 !=0 && total !=0){
                cout<< -1 <<endl;
                break;
            }
            if(arr[i] == 2){
                count++;
            }
            if(count == total/2){
                cout << i+1<<endl;
                break;
            }
        }
    }
    return 0;
    

}