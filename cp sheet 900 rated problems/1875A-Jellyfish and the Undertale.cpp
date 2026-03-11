#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--){
	    long long int a,b;
	    int n;
	    cin >> a >> b;
	    cin >> n;
	    long long int total_time = b;
	    vector<long long int> arr(n);
	    for(int i =0;i<n;i++){
	        cin >> arr[i];
	        total_time+= min(arr[i], a-1);
	    }
	    cout << total_time << endl;
	}
	return 0;
}