#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[1000], b[1000];

void next(){
	int t;
	for(int i = k; i >= 1; i--){
		if(a[i] < n-k+i){
			t = i;
			break;
		}
	}
	a[t] += 1;
	for(int i = t+1; i <= k; i++) a[i] = a[t] + (i-t);
}

bool chc(){
	for(int i = 1; i <= k; i++){
		if(a[i] != n-k+i) return false;
	}
	return true;
}

int nghi(){
	int cnt = 0;
	for(int i = 1; i <= k; i++){
		for(int j = 1; j <= k; j++){
			if(a[i] == b[j]) cnt++;
		}
	}
	return k - cnt;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= k; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		if(chc()) cout << k;
		else{
			next();
			cout << nghi();
		}
		cout << endl;
	}
	return 0;
}