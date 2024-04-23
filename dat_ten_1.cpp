#include <bits/stdc++.h>
using namespace std;

int X[32];
string a[32];
int n, k, len;

void in (){
	for(int i = 1; i <= n; i++){
		cout << a[X[i]] << " ";
	}
	cout << endl;
}

void Try(int i){
	for(int j = X[i-1]+1; j <= len-k+1; j++){
		X[i] = j;
		if(i == n) in();
		else Try(i+1);
	}
}

int main(){
	int t;
	X[0] = 0;
	cin >> t;
	while(t--){
		cin >> n >> k;
		set<string> se;
		for(int i = 1; i <= n; i++){
			string x;
			cin >> x;
			se.insert(x);
		}
		int cnt = 0;
		for(auto it : se){
			a[++cnt] = it;
		}
		len = se.size();
		Try(1);
	}
	return 0;
}
