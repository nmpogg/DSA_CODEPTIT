#include <bits/stdc++.h>
using namespace std;

int n, a[22], X[22];
vector<vector<int>> res;

bool check(){
	int z[22];
	for(int i = 1; i <= n; i++){
		if(X[i]) z[i] = a[i];
	}
	for(int i = 1; i < n; i++){
		if(z[i] >= z[i+1]) return false;
	}
	return true;
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		X[i] = j;
		if(i == n){
			if(check()){
				vector<int> v;
				for(int k = 1; k <= n; k++){
					if(X[k]) v.push_back(a[k]);
				}
				res.push_back(v);
			}
		}
		else Try(i+1);
	}
}

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	Try(1);
	sort(res.begin(), res.end());
	for(auto it : res){
		for(auto it2 : it) cout << it2 << " ";
		cout << endl;
	}
	return 0;
}