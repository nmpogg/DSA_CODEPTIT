#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n], b[n];
		for(long long &x : a) cin >> x;
		for(long long &x : b) cin >> x;
		sort(a, a+n);
		sort(b, b+n, greater<long long>());
		long long sum = 0;
		for(int i = 0; i < n; i++){
			sum += a[i] * b[i];
		}
		cout << sum << endl;
	}
	return 0;
}