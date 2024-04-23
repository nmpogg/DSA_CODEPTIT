#include <bits/stdc++.h>
using namespace std;

int binary(int a[], int n, int x){
	int l = 0, r = n-1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] == x) return m;
		else if(a[m] < x){
			l = m + 1;
		}
		else r = m - 1;
	}
	return -1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		auto it = binary(a, n, k);
		if(it == -1) cout << "NO\n";
		else cout << it + 1 << endl;
	}
	return 0;
}