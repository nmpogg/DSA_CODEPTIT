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
		for(int &x : a){
			cin >> x;
			mp[x] = 1;
		}
		sort(a, a+n);
		int cnt = 0;
		for(int i = a[0]; i <= a[n-1]; i++){
			if(!mp[i]) cnt++;
		}
		cout << cnt << endl;
	}
}