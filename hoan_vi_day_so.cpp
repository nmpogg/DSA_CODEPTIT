#include <bits/stdc++.h>
using namespace std;

int n;
int a[11], X[11];
bool use[11] = {};

void in(){
	for(int i = 1; i <= n; i++) cout << a[X[i]] << " ";
	cout << endl;
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
	cin >> n;
	X[0] = 0;
	for(int i = 1; i <= n; i++) cin >> a[i];
	sort(a+1, a+n+1);
	Try(1);
	return 0;
}
