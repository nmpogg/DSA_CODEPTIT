#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		map<int, int> mp;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		sort(a, a+n);
		int cnt = 0;
		for(int i = 0; i < n; i++){
			if(binary_search(a+i+1, a+n, k - a[i])){
				cnt += (mp[a[i]] - 1);
				if(a[i] != k - a[i]){
					cnt += (mp[k - a[i]]);
					mp[k - a[i]]--;
				}
				mp[a[i]]--;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}