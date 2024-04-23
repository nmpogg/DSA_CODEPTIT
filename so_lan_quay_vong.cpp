#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		int flag = 0;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 1; i < n; i++){
			if(a[i-1] > a[i]){
				flag = 1;
				cout << i << endl;
				break;
			}
		}
		if(!flag) cout << 0 << endl;
	}
}