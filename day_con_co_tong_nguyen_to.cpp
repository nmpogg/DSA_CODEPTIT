#include <bits/stdc++.h>
using namespace std;

int n, a[17], X[17];
set<vector<int>> res;

int prime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		X[i] = j;
		if(i == n){
			int sum = 0;
			for(int k = 1; k <= n; k++){
				if(X[k]) sum += a[k];
			}
			if(prime(sum)){
				vector<int> v;
				for(int k = 1; k <= n; k++){
					if(X[k]) v.push_back(a[k]);
				}
				sort(v.begin(), v.end(), greater<int>());
				res.insert(v);
			}
		}
		else Try(i+1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++) cin >> a[i];
		Try(1);
		for(auto it : res){
			for(auto it2 : it) cout << it2 << " ";
			cout << endl;
		}
	}
	return 0;
}