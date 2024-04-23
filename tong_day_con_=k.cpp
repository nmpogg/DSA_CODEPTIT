#include <bits/stdc++.h>
using namespace std;

int n, k, a[10000], cnt, X[10000];

void in(){
	for(int i = 1; i <= n; i++){
		if(X[i]) cout << a[i] << " ";
	}
	cout << endl;
}

bool sum(){
	int sum_x = 0;
	for(int i = 1; i <= n; i++){
		if(X[i] == 1){
			sum_x += a[i];
		}
	}
	if(sum_x == k) return true;
	return false;
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		X[i] = j;
		if(i == n){
			if(sum()){
				cnt++;
				in();
			}
		}
		else Try(i+1);
	}
}

int main(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++) cin >> a[i];
	Try(1);
	cout << cnt;
	return 0;
}
