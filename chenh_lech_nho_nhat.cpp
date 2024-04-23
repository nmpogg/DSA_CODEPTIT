#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		sort(a, a+n);
		int res = 1e9;
		for(int i = 0; i < n-1; i++){
			if(a[i+1] - a[i] < res) res = a[i+1] - a[i];
		}
		cout << res << endl;
	}
	return 0;
}