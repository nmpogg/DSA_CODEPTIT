#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		long long a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		auto it = lower_bound(a, a+n, x);
		if(it - a != 0){
			if(*it == x) cout << it - a + 1 << endl;
			else cout << it - a << endl;
		}
		else cout << -1 << endl;
	}
}