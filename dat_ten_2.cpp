#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[18];

void in(){
	for(int i = 1; i <= k; i++){
		char x = a[i] + 64;
		cout << x;
	}
	cout << endl;
}

void Try(int i){
	for(int j = a[i-1] + 1; j <= n-k+i; j++){
		a[i] = j;
		if(i == k) in();
		else Try(i+1);
	}
}

int main(){
	a[0] = 0;
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		Try(1);
	}
	return 0;
}
