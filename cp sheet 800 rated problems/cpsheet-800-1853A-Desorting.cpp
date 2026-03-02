#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    long long count =1000000000;
    cin >>t;
    while(t--){
    int a;
    cin >>a;
    vector<int>arr(a);
    for(int i =0;i<a;i++){
        cin >>arr[i];
    }
    for(int i =1;i<a;i++){
        if(arr[i-1]>arr[i]){
            count = 0;
            break;
        }else{
            if(count > (arr[i] - arr[i-1])){
                count = arr[i] - arr[i-1];
            }
        }
        
        if(arr[i-1] == arr[i]){
            count = 1;
        }
    }
    if(count >2){
        if(count %2 == 0){
            cout << count/2 +1 <<endl;
        }else{
            cout << (count+1)/2 <<endl;
        }
    }else{
        cout << count << endl;
    }
    count = 1000000000;
    
        
    }
    return 0;
}