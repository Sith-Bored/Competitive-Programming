#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	vector<int>arr;
	for(int i =0;i<n;i++){
	    int b;
	    cin >> b;
	    arr.push_back(abs(b));
	}
	int mini = *min_element(arr.begin(),arr.end());
	cout << mini << endl;
 
}