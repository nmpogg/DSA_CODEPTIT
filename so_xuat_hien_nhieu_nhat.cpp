#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		map<int, int> mp;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			mp[x]++;
		}
		int res, up = 0;
		for(auto it : mp){
			if(it.second > up){
				res = it.first;
				up = it.second;
			}
		}
		if(up > n/2) cout << res << endl;
		else cout << "NO\n";
	}
	return 0;
}