#include <bits/stdc++.h>
using namespace std;

int n, k;
int X[42], a[42];


bool chc(){
	for(int i = 1; i <= k; i++){
		if(X[i] != n-k+i) return false;
	}
	return true;
}

void next(){
	int t;
	for(int i = k; i >= 1; i--){
		if(X[i] < n-k+i){
			t = i;
			break;
		}
	}
	X[t] += 1;
	for(int i = t+1; i <= k; i++){
		X[i] = X[t] + (i - t);
	}
}

int dem(){
	int cnt = 0;
	for(int i = 1; i <= k; i++){
		for(int j = 1; j <= k; j++){
			if(X[i] == a[j]) cnt++;
		}
	}
	return cnt;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= k; i++){
			cin >> X[i];
			a[i] = X[i];
		}
		if(chc()) cout << k << endl;
		else{
			next();
			cout << k - dem() << endl;
		}
	}
	return 0;
}
