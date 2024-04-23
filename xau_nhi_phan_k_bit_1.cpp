#include <bits/stdc++.h>
using namespace std;

int n, X[25];
int k;

void in(){
	for(int i = 1; i <= n; i++) cout << X[i];
	cout << endl;
}

int check(){
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		if(X[i]) cnt++;
	}
	if(cnt == k) return 1;
	return 0;
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		X[i] = j;
		if(i == n){
			if(check()) in();
		}
		else Try(i+1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){ 
		cin >> n >> k;
		Try(1);
	}
	return 0;
}
