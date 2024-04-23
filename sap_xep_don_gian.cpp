#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(a[i] >= a[0]) cnt++;
	}
	cout << ;
	return 0;
}