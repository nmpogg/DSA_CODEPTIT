#include <bits/stdc++.h>
using namespace std;

int X;

bool cmp(int a, int b){
	return abs(a-X) < abs(b-X);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n >> X;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		stable_sort(a, a+n, cmp);
		for(int x : a) cout << x << " ";
		cout << endl;
	}
	return 0;
}