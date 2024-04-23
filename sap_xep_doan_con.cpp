#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--) {
		int n, k , x;
		cin >> n;
		vector<int> a(n);
		cin >> a[0];
		int m[n], M[n];
		M[0] = a[0];
		for(int i = 1; i < n; ++i) {
			cin >> a[i];
			M[i] = max(a[i], M[i - 1]);
		}
		m[n - 1] = a[n - 1];
		for(int i = n - 2; i >= 0; --i) m[i] = min(a[i], m[i + 1]);
		vector<int> ans;
		--n;
		for(int i = 0; i < n; ++i) if(M[i] <= m[i + 1]) ans.push_back(i + 1);
		if(ans.size() == 0) cout << 0 << endl << endl;
		else {
			cout << ans.size() << endl;
			for(int i : ans) cout << i << ' ';
			cout << endl;
		}
	}
	return 0;
}