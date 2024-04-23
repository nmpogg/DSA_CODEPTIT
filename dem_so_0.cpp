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
			if(x == 0) mp[x]++;
		}
		cout << mp[0] << endl;
	}
	return 0;
}