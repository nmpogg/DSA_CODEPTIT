#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a+n);
		bool flag = false;
		for(int i = 0; i < n-2; i++){
			for(int j = i+1; j < n-1; j++){
				long long sum = a[i] + a[j];
				if(binary_search(a+j+1, a+n, k - sum)){
					cout << "YES\n";
					flag = true;
					break;
				}
			}
			if(flag) break;
		}
		if(!flag) cout << "NO\n";
	}
	return 0;
}