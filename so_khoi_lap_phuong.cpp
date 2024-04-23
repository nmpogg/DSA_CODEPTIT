#include <bits/stdc++.h>
using namespace std;

string s;
long long res;
int X[100], n;

bool check(long long n){
	long long can  = cbrt(n) + 0.5;
	return can * can * can  == n;
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		X[i] = j;
		if(i == n-1){
			long long tmp =  0;
			for(int k = 0; k < n; k++){
				if(X[k]){
					tmp = tmp * 10 + (s[k] - '0');
				}
			}
			if(check(tmp) && tmp > res) res = tmp;
		}
		else Try(i+1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		n = s.size();
		res = 0;
		Try(0);
		if(res == 0) cout << -1 << endl;
		else cout << res << endl;
	}
	return 0;
}