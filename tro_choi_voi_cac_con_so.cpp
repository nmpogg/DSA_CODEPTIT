#include <bits/stdc++.h>
using namespace std;

int X[12], n;
bool use[12] = {};

void in(){
	for(int i = 1; i <= n; i++){
		cout << X[i];
	}
	cout << endl;
}

bool check(){
	for(int i = 1; i < n; i++){
		if(abs(X[i+1] - X[i]) == 1) return false;
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
					in();
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