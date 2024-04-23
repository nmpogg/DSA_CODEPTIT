#include <bits/stdc++.h>
using namespace std;

void solve(long long tu, long long mau){
	if(mau % tu == 0){
		cout << "1/" << mau/tu << endl;
		return;
	}
	long long x = mau / tu + 1;
	cout << "1/" << x << " + ";
	long long tumoi = tu*x - mau;
	long long maumoi = mau*x;
	solve(tumoi, maumoi);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long p , q;
		cin >> p >> q;
		solve(p, q);
	}
	return 0;
}