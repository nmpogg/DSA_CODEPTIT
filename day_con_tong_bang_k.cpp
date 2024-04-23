#include <bits/stdc++.h>
using namespace std;

int n, k, X[12];
int a[12];
vector<vector<int>> v;

bool check(){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		if(X[i]){
			sum += a[i];
		}
	}
	if(sum == k) return true;
	return false;
}

void save(){
	vector<int> x;
	for(int i = 1; i <= n; i++){
		if(X[i]) x.push_back(a[i]);
	}
	v.push_back(x);
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		X[i] = j;
		if(i == n){
			if(check()) save();
		}
		else Try(i+1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		v.clear();
		cin >> n >> k;
		for(int i = 1; i <= n; i++) cin >> a[i];
		sort(a+1, a+n+1);
		Try(1);
		if(v.empty()) cout << -1;
		else{
			sort(v.begin(), v.end());
			for(auto x : v){
				for(int i = 0; i < x.size(); i++){
					if(i == 0) cout << "[" << x[i] << " ";
					else if (i == x.size() - 1) cout << x[i] << "] ";
					else cout << x[i] << " ";
				}
			}
		}
		cout << endl;
	}
	return 0;
}