#include <bits/stdc++.h>
using namespace std;

int giaithua(int n){
	if(n == 0) return 1;
	return n * giaithua(n-1);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int cnt = 0, a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		do{
			cnt++;
		}
		while(next_permutation(a, a + n));
		cout << giaithua(n) - cnt + 1 << endl;
	}
	return 0;
}
