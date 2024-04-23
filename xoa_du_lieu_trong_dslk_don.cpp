#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int x; cin >> x;
	for(int k : a){
		if(k != x) cout << k << " ";
	}
	return 0;
}