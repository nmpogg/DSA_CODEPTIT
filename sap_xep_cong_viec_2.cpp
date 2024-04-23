#include <bits/stdc++.h>
using namespace std;

struct cv{
	int id, deadline, profit;
};

bool cmp(cv a, cv b){
	return a.profit > b.profit;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cv a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i].id >> a[i].deadline >> a[i].profit;
		}
		sort(a, a+n, cmp);
		bool used[1000];
		memset(used, false, sizeof(used));
		long long ans = 0, cnt = 0;
		for(int i = 0; i <= n-1; i++){
			for(int j = a[i].deadline - 1; j >= 0; j--){
				if(used[j] == false){
					used[j] = true;
					ans += a[i].profit;
					cnt += 1;
					break;
				}
			}
		}
		cout << cnt << " " << ans << endl;
	}
	return 0;
}