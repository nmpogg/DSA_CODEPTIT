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
		for(auto it : mp){
			while(it.second--) cout << it.first << " ";
		}
		cout << endl;
	}
	return 0;
}