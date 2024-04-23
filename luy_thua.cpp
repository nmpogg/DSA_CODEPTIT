#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

long long binary_pow(long long n, long long k){
	if(k == 0) return 1;
	long long x = binary_pow(n, k/2) % MOD;
	if(k % 2 == 1) return ((x % MOD) * (x % MOD) * (n % MOD)) % MOD;
	else return ((x % MOD) * (x % MOD)) % MOD;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n , k;
		cin >> n >> k;
		cout << binary_pow(n ,k) << endl;;
	}
	return 0;
}