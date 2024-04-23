#include <bits/stdc++.h>
using namespace std;

int *dp = new int[1000000002];

int main(){
	int n, s;
	cin >> n >> s;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	dp[0] = 1;
	for(int i = 1; i <= s; i++){
		dp[i] = 1e9;
		for(int x : a){
			if(i >= x){
				dp[i] = min(dp[i], dp[i-x]+1);
			}
		}
	}
	if(dp[s] == 1e9) cout << -1;
	else cout << 1;
}