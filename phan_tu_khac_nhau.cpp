#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		long long b[n-1];
		for(int i = 0; i < n-1; i++){
			cin >> b[i];
		}
		for(int i = 0; i < n-1; i++){
			if(b[i] != a[i]){
				cout << i + 1 << endl;
				break;
			}
		}
	}
	return 0;
}