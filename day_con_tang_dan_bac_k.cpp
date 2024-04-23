#include <bits/stdc++.h>
using namespace std;

int n, k, cnt = 0;
int a[1000], X[1000], kq[1000];


bool check(){
	for(int i = 1; i < k; i++){
		if(a[X[i]] >= a[X[i+1]]) return false;
	}
	return true;
}

void Try(int i){
	for(int j = X[i-1] + 1; j <= n-k+i; j++){
		X[i] = j;
		if(i == k){
			if(check()) cnt++;
		}
		else Try(i+1);
	}
}

int main(){
	X[0] = 0;
	cin >> n >> k;
	for(int i = 1; i <= n; i++) cin >> a[i];
	Try(1);
	cout << cnt;
	return 0;
}
