#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	t = 1;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n-1; i++){
			int idx = i;
			for(int j = i+1; j < n; j++){
				if(a[j] < a[idx]){
					idx = j;
				}
			}
			swap(a[i], a[idx]);
			cout << "Buoc " << i + 1 << ": ";
			for(int i = 0; i < n; i++){
				cout << a[i] << " ";
			}
			cout << endl;
		}
	}
}