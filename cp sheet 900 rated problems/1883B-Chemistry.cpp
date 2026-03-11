#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n,k;
        cin >> n >> k;
        string word;
        cin >> word;
        
        unordered_map<char,int> char_count;
        int odd_rep =0;
        
        for(char c : word){
            char_count[c]++;
        }
        
        for(auto pair : char_count){
            int count = pair.second;
            
            if(count%2 !=0){
                odd_rep++;
            }
        }
        
        if(k + 1>= odd_rep){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }
    return 0;
}