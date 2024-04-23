#include <bits/stdc++.h>
using namespace std;

int n, k, s, cnt;
int x[12];

bool sum_s(){
	int sum = 0;
	for(int i = 1; i <= k; i++) sum += x[i];
	if(sum == s) return true;
	return false;
}
void Try(int i){
	for(int j = x[i-1]+1; j <= n-k+i; j++){
		x[i] = j;
		if(i == k){
			if(sum_s()) cnt++;
		}
		else Try(i+1);
	}
}

int main(){
	x[0] = 0;
	while(1){
		cin >> n >> k >> s;
		if(n == 0 && k == 0 && s == 0) break;
		cnt = 0;
		Try(1);
		cout << cnt << endl;
	}
	return 0;
}