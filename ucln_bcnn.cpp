#include <bits/stdc++.h>
using namespace std;

int uoc(int a, int b){
	while(b != 0){
		int r = a % b ;
		a = b;
		b = r;
	}
	return a;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		int UCLN = uoc(a, b);
		long long BCNN = (long long)a * b / UCLN;
		cout << UCLN << " " << BCNN << endl;
	}
	return 0;
}
