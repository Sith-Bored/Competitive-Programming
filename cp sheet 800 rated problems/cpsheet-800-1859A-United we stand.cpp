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
        cin >> n;
        vector<int> arr(n);
        vector<int> b;
        bool isit = false;
        vector<int>c;
        for(int i =0;i<n;i++){
            cin >> arr[i];
            int is = arr[0];
            if(arr[i]!= is){
                isit = true;
            }
        }
        int mini = *min_element(arr.begin(),arr.end());
        if(!isit){
            cout << -1 << endl;
        }else{
            for(int i =0;i<n;i++){
                if(arr[i] != mini){
                    c.push_back(arr[i]);
                }else{
                    b.push_back(arr[i]);
                }
            }
            cout  << b.size()<<" "<<c.size()<<endl;
            for(int i=0;i<b.size();i++){
                cout << b[i] << " ";
            }
            cout << endl;
            for(int i=0;i<c.size();i++){
                cout << c[i] << " ";
            }
            cout<<endl;
        }
    }
    return 0;
 
}