#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		sort(a, a+n);
		long long sum = 0;
		for(int i = 0; i < n; i++){
			sum += i * a[i];
		}
		cout << sum % 1000000007 << endl;
	}
	return 0;
}