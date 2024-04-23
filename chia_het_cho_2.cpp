#include <bits/stdc++.h>
using namespace std;

int PT(int n ){
	int cnt = 0;
	for(int i = 2; i <= sqrt(n); i += 2){
		if(n % i == 0){
			cnt++;
			if(i != n / i) cnt++;
		}
	}
	if(n % 2 == 0) cnt++;
	return cnt;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << PT(n) << endl;
	}
	return 0;
}
