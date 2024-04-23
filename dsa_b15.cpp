#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		for(int i = 0; i < n-1; i++){
			if(a[i+1] != 0 && a[i] == a[i+1]){
				a[i] *= 2;
				a[i+1] = 0;
			}
		}
		map<int, int> mp;
		for(int x : a){
			if(x == 0) mp[x]++;
			else cout << x << ' ';
		}
		while(mp[0]--) cout << "0 ";
		cout << endl;
	}
}