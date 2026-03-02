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
        cin>>n;
        string str = to_string(n);
        int len = str.length();
        int digit = str[0]-'0';
        int count = (len-1)*9 + digit;
        cout<<count<<endl;
    }
}