#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		long long sum_l = 0, sum_r = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			sum_r += a[i];
		}
		int i = 0, idx = -1;
		for(int i = 0; i < n; i++){
			sum_r -= a[i];
			if(sum_l == sum_r){
				idx = i;
				break;
			}
			sum_l += a[i];
		}
		if(idx == -1) cout << "-1\n";
		else cout << idx+1 << endl;
	}
	return 0;
}