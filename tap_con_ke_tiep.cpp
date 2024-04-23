#include <bits/stdc++.h>
using namespace std;

int n, k, X[10000];
bool flag = true;

void next(){
	int i = k;
	while(i > 0 && X[i] == n-k+i) --i;
	if(i > 0){
		X[i] += 1;
		for(int j = i+1; j <= k; j++){
			X[j] = X[i] + j - i;
		}
	}
	else flag = false;
}

int main(){
	int t;
	cin >> t;
	X[0] = 0;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= k; i++) cin >> X[i];
		next();
		if(!flag){
			for(int i = 1; i <= k; i++) cout << i << " ";
			flag = true;
		}
		else for(int i = 1; i <= k; i++) cout << X[i] << " ";
		cout << endl;
	}
	return 0;
}
