#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n], kq[n-1][n];
	for(int &x : a) cin >> x;
	for(int i = 0; i < n; i++){
		int idx = i;
		for(int j = i+1; j < n; j++){
			if(a[j] < a[idx]) idx = j;
		}
		swap(a[i], a[idx]);
		for(int j = 0; j < n; j++){
			kq[i][j] = a[j];
		}
	}
	for(int i = n-2; i >= 0; i--){
		cout << "Buoc " << i+1 << ": ";
		for(int j = 0; j < n; j++) cout << kq[i][j] << " ";
		cout << endl;
	}
	return 0;
}