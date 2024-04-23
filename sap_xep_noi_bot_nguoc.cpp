#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], kq[n-1][n];
		int cnt = 0;
		for(int &x : a) cin >> x;
		for(int i = 0; i < n; i++){
			bool flag = false;
			for(int j = 0; j < n-i-1; j++){
				if(a[j] > a[j+1]){
					flag = true;
					swap(a[j], a[j+1]);
				}
			}
			if(!flag) break;
			for(int j = 0; j < n; j++){
				kq[cnt][j] = a[j];
			}
			cnt++;
		}
		for(int i = cnt-1; i >= 0; i--){
			cout << "Buoc " << i + 1 << ": ";
			for(int j = 0; j < n; j++) cout << kq[i][j] << " ";
			cout << endl;
		}
	}
	return 0;
}