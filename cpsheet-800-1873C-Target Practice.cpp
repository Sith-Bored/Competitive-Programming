#include <bits/stdc++.h>
#define ll long long
#define readn for(int i =0;i<n;i++) cin>> arr[i]
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char arr[10][10];
    int t;
    cin >> t;
    while(t--){
        int count =0;
        for(int i =0;i<10;i++){
            for(int j =0;j<10;j++){
                cin >> arr[i][j];
                if(arr[i][j] == 'X'){
                    if(i == 0 || j ==0 || i==9||j==9){
                        count++;
                    }else if(i ==1|| j ==1 || i ==8 || j ==8){
                        count+=2;
                    }else if(i== 2 || j == 2 || j == 7 || i == 7){
                        count +=3;
                    }else if(i ==3 || j ==3 || j == 6 || i == 6){
                        count += 4;
                    }else{
                        count+=5;
                    }
                }
            }
        }
        cout << count << endl;
    }
}