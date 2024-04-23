#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int kq[n-1][n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n-1; i++){
			for(int j = i+1; j < n; j++){
				if(a[i] > a[j]) swap(a[i], a[j]);
			}
			for(int j = 0; j < n; j++){
				kq[i][j] = a[j];
			}
		}
		for(int i = n-2; i >= 0; i--){
			cout << "Buoc " << i+1 << ": ";
			for(int j = 0; j < n; j++){
				cout << kq[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}