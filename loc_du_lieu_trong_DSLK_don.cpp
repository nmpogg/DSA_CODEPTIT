#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	int flag[100000] = {};
	for(int i = 0; i < n; i++){
		if(!flag[a[i]]){
			cout << a[i] << " ";
			flag[a[i]] = 1;
		}
	}
	return 0;
}