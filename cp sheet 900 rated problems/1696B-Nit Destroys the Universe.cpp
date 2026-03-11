#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >>n;
	     
	    int totalCount =0;
	    int noOfZeroes =0;
	    int nonZeroes =0;
	    
	    vector<int> arr(n);
	    for(int i =0;i<n;i++){
	        cin >> arr[i];
	        if(arr[i] == 0){
	            noOfZeroes++;
	        }
	    }
	    for(int i =0;i<n;i++){
	        if(arr[i] !=0){
	            nonZeroes++;
	        }else{
	            if(nonZeroes != 0){
	                totalCount++;
	                nonZeroes = 0;
	            }
	        }
	    }
	    if(nonZeroes > 0){
	        totalCount++;
	    }
	    
	    if(totalCount > 2){
	        totalCount = 2;
	    }
	    
	    if(noOfZeroes != n){
	       cout << totalCount << endl;
	    }else{
	        cout << 0 << endl;
	    }
	    
	    
	    
	}
}