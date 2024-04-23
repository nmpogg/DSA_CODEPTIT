#include <bits/stdc++.h>
using namespace std;

int n, a[22], X[22], k;
set<string> se;

bool check(){
	for(int i = 1; i < k; i++){
		if(a[X[i]] >= a[X[i+1]]) return false;
	}
	return true;
}

void Try(int i){
	for(int j = X[i-1] +1; j <= n-k+i; j++){
		X[i] = j;
		if(i == n){
			if(check()){
				string res;
				for(int t = 1; t <= k; t++){
					res += to_string(a[X[t]]);
					res += " ";
					//res.push_back(a[X[t]]);
				}
				se.insert(res);
			}
		}
		else Try(i+1);
	}
}

int main(){
	cin >> n;
	X[0] = 0;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(k = 2; k <= n; k++){
		Try(1);
	}
	for(auto it : se){
		cout << it << endl;
	}
	return 0;
}