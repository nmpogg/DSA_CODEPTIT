#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int b[m];
		set<int> a, hop, giao;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			a.insert(x);
			hop.insert(x);
		}
		for(int i = 0; i < n; i++){
			cin >> b[i];
			hop.insert(b[i]);
		}
		for(int i = 0; i < n; i++){
			if(a.count(b[i]) != 0) giao.insert(b[i]);
		}
		for(auto it : hop) cout << it << " ";
		cout << endl;
		for(auto it : giao) cout << it << " ";
		cout << endl;
	return 0;
}