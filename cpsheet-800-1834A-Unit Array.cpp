#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n,sum =0,prod =1,num;
        cin >> n;
        vector<int>arr(n);
        for(int  i=0;i<n;i++){
            cin >> arr[i];
            sum += arr[i];
            prod *= arr[i];
        }
        if(sum >= 0){
            if(prod == 1){
                cout << 0 << endl;
            }else{
                cout << 1 << endl;
            }
        }else{
            if(-sum %2 == 0){
                num = -sum/2;
            }else{
                num = (-sum +1)/2;
            }
            if(num %2 ==0){
                if(prod == 1){
                   cout << num<<endl; 
                }
                else{
                    cout << num +1<<endl;
                }
            }else{
                if(prod == 1){
                    cout << num +1 << endl;
                }else{
                    cout << num << endl;
                }
            }
                
        }
    }
}