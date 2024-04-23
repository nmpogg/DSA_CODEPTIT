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
			a[i] *= a[i];
		}
		sort(a, a+n);
		int flag = 0;
		for(int i = 0; i < n-2; i++){
			for(int j = i+1; j < n-1; j++){
				if(binary_search(a+j+1, a+n, a[i]+a[j])){
					flag = 1;
					cout << "YES\n";
				}
			}
			if(flag) break;
		}
		if(!flag) cout << "NO\n";
	}
}