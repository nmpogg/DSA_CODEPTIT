#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	long long MOD = 1e9 + 7;
	while(t--){
		int n;
		cin >> n;
		priority_queue<int, vector<int>, greater<int>> q;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			q.push(x);
		}		
		long long ans = 0;
		while(q.size() != 1){
			int x = q.top();
			q.pop();
			int y = q.top();
			q.pop();
			ans += (x % MOD + y % MOD) % MOD;
			ans %= MOD;
			q.push((x % MOD + y % MOD) % MOD);
		}
		cout << ans << endl;
	}
	return 0;
}