#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+2][n+2];
		for(int i = 0; i < n; i++) cin >> a[0][i];
		int k = n-1;
		for(int i = 1; i < n; i++){
			for(int j = 0; j < k; j++) a[i][j] = a[i-1][j+1] + a[i-1][j];
		}
		k = 0;
		for(int i = n-1; i >= 0; i--){
			cout << "[";
			for(int j = 0; j < k; j++){
				cout << a[i][j] << " ";
			}
			cout << a[i][k] << "]";
			++k;
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}