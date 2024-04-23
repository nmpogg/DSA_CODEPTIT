#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n], kq[n][n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int res = a[0];
 	for(int i = 1; i < n; i++){
		int key = a[i];
		int j = i-1;
		while(j >= 0 && a[j] > key){
			a[j+1] = a[j];
			j -= 1;
		}
		a[j+1] = key;
		for(int k = 0; k <= i; k++){
			kq[i][k] = a[k];
		}
	}
	for(int i = n-1; i > 0; i--){
		cout << "Buoc " << i << ": ";
		for(int j = 0; j <= i; j++){
			cout << kq[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Buoc 0: " << res;
	return 0;
}