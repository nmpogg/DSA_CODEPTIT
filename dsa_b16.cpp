#include <bits/stdc++.h>
using namespace std;

int binary(int a[], int l, int r, int x){
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
		int n, k, s;
		cin >> n >> k >> s;
		int a[n+1], pre[n+1];
		pre[0]  = 0;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			pre[i] = pre[i-1] + a[i];
		}
		int flag = 0;
		for(int i = 1; i <= n; i++){
			int f = binary(pre, i+1, n, pre[i] + s);
			if(f != -1 && f - i == k){
				cout << "Yes\n";
				flag = 1;
				break;
			}
		}
		if(!flag) cout << "No\n";
	}
}