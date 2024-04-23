#include <bits/stdc++.h>
using namespace std;

int n, X[12];
bool use[12] = {};

void in(){
	for(int i = 1; i <= n; i++) cout << X[i];
	cout << " ";
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(!use[j]){
			X[i] = j;
			use[j] = true;
			if(i == n) in();
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
		cout << endl;
	}
	return 0;
}
