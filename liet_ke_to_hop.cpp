#include <bits/stdc++.h>
using namespace std;

int n, k, cnt = 0;
int a[10000], X[10000];

void in(){
	for(int i = 1; i <= k; i++) cout << a[X[i]] << " ";
	cout << endl;
}

void Try(int i){
	for(int j = X[i-1] +1; j <= n-k+i; j++){
		X[i] = j;
		if(i == k) in();
		else Try(i+1);
	}
}

int main(){
	X[0] = 0;
	cin >> n >> k;
	set<int> mp;
	for(int i = 1; i <= n; i++){
		int x; cin >> x;
		mp.insert(x);
	}
	for(auto it : mp){
		a[++cnt] = it;
	}
	n = cnt;
	Try(1);
	return 0;
}
