#include <bits/stdc++.h>
using namespace std;

bool dau(int n){
	while(n > 9){
		n /= 10;
	}
	return n;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int c = n % 10;
		int d = dau(n);
		if(c == d) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
