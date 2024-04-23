#include <bits/stdc++.h>
using namespace std;

int n, a[12][12];
set<string> se;
bool check;

void Try(int i, int j, string s){
	if(i == 1 && j == 1 && a[i][j] == 0) return;
	if (i > n || j > n) {
        return;
    }
    if(i == n && j == n && a[n][n]){
    	se.insert(s);
    	check = true;
    	return;
	}
	if(i < n && a[i+1][j]){
		Try(i+1, j, s + "D");
	}
	if(j <n && a[i][j+1]){
		Try(i, j+1, s + "R");
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		check = false;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++) cin >> a[i][j];
		}
		string s = "";
		Try(1, 1, s);
		if(check){		
			for(auto x : se) cout << x << " ";
			se.clear();
		}
		else cout << -1;
		cout << endl;
	}
}