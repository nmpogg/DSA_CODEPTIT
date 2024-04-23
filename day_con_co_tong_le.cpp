#include <bits/stdc++.h>
using namespace std;

int n, X[17], a[17];
vector<vector<int>> rs;

void solve(int i){
	for(int j = 0; j <= 1; j++){
		X[i] = j;
		if(i == n){
			int sum = 0;
			for(int k = 1; k <= n; k++){
				if(X[k]) sum += a[k];
			}
			if(sum % 2 == 1){
				vector<int> tmp;
				for(int k = 1; k <= n; k++){
					if(X[k]) tmp.push_back(a[k]);
				}
				sort(tmp.begin(), tmp.end(), greater<int>());
				rs.push_back(tmp);
			}
		}
		else solve(i+1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		rs.clear();
		cin >> n;
		for(int i = 1; i <= n; i++) cin >> a[i];
		solve(1);
		sort(rs.begin(), rs.end());
		for(auto it1 : rs){
			for(auto it2 : it1){
				cout << it2 << " ";
			}
			cout << endl;
		}
	}
	return 0;
}