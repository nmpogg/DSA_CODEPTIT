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
		for(int i = 0; i < n; i++){
			auto it = upper_bound(a+1, a+n, a[i]);
			if(it != (a+n)) cout << *it << " ";
			else cout << -1 << " ";
		}
		cout << endl;
	}
	return 0;
}