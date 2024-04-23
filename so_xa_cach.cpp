#include <bits/stdc++.h>
using namespace std;

int n, X[12];
bool use[12] = {};

bool check(){
	for(int i = 1; i < n; i++){
		if(abs(X[i] - X[i+1]) == 1) return false;
	}
	return true;
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(!use[j]){
			X[i] = j;
			use[j] = true;
			if(i == n){
				if(check()){
					for(int k = 1; k <= n; k++) cout << X[k];
					cout << endl;
				}
			}
			else Try(i+1);
			use[j] = false;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		Try(1);
	}
	return 0;
}