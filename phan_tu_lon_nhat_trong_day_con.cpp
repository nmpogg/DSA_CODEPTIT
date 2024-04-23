#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		multiset<int> se;
		for(int i = 0; i < k; i++) se.insert(a[i]);
		cout << *se.rbegin() << " ";
		for(int i = k; i < n; i++){
			se.insert(a[i]);
			int cnt = se.size();
			int res = a[i-k];
			se.erase(res);
			cnt -= se.size();
			while(cnt--){
				se.insert(res);
			}
			cout << *se.rbegin() << " ";
		}
		cout << endl;
	}
}