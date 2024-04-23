#include <bits/stdc++.h>
using namespace std;

void Max(int n, int s){
	if(s > n * 9 || s < 1){
		cout << -1;
		return;
	}
	--s;
	int res[n];
	for(int i = n-1; i > 0; i--){
		if(s >= 9){
			res[i] = 9;
			s -= 9;
		}
		else{
			res[i] = s;
			s = 0;
		}
	}
	res[0] = s + 1;
	for(int x : res) cout << x;
}

void Min(int n, int s){
	if(s < 1 || s > n * 9){
		cout << -1;
		return;
	}
	int res[n];
	for(int i = 0; i < n; i++){
		if(s >= 9){
			res[i] = 9;
			s -= 9;
		}
		else{
			res[i] = s;
		}
	}
	for(int x : res) cout << x;
}

int main(){
	int n ,s;
	cin >> n >> s;
	Max(n, s);
	cout << " ";
	Min(n, s);
	return 0;
}