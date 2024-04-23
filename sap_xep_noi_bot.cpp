#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
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
		cout << "Buoc " << i + 1 << ": ";
		for(int j = 0; j < n; j++){
			cout << a[j] << " ";
		}
		cout << endl;
	}
	return 0;
}