#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		map<int, int> mp;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		bool flag = false;
		int res;
		for(int i = 0; i < n; i++){
			if(mp[a[i]] == 2){
				cout << a[i] << endl;
				flag = true;
				break;
			}
		}
		if(!flag) cout << "NO\n";
	}
	return 0;
}