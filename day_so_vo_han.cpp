#include <bits/stdc++.h>
using namespace std;

int *a = new int[1000000002];

int main(){
	int MOD = 1e9 + 7;
	a[0] = 0;
	a[1] = 1;
	for(int i = 2; i <= 1000000002; i++){
		a[i] = (a[i-1] % MOD + a[i-2] % MOD) % MOD;
		a[i] %= MOD;
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << a[n] << endl;
	}
}