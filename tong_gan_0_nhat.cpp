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
		long long minn = 1e18, res;
		for(int i = 0; i < n-1; i++){
			for(int j = i+1; j < n; j++){
				long long tmp = abs(a[i] + a[j]);
				if(tmp < minn){
					res = a[i] + a[j];
					minn = tmp;
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}