#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

long long poww(long long n, long long k){
	if(k == 0) return 1;
	long long x = poww(n, k/2) % MOD;
	if(k % 2 == 1) return ((x % MOD) * (x % MOD) * (n % MOD)) % MOD;
	else return ((x % MOD) * (x % MOD)) % MOD;
}

int main(){
	long long a, b;
	while(cin >> a >> b){
		if(a == 0 && b == 0) break;
		cout << poww(a, b) << endl;
	}
}