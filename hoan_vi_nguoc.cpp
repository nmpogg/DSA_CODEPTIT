#include <bits/stdc++.h>
using namespace std;

int n, X[12];
bool use[12] = {};
int kq[1000000][12], cnt = 0;

void in(){
	++cnt;
	for(int i = 1; i <= n; i++) kq[cnt][i] = X[i];
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(!use[j]){
			X[i] = j;
			use[j] = true;
			if(i == n) in();
			else Try(i+1);
			use[j] = false;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		Try(1);
		for(int i = cnt; i >= 1; i--){
			for(int j = 1; j <= n; j++){
				cout << kq[i][j];
			}
			cout << " ";
		}
		cnt = 0;
		cout << endl;
	}
	return 0;
}
