#include <bits/stdc++.h>
using namespace std;

int n, a[10][10];
vector<string> v;
bool cross[10][10] = {}, flag;

void nhap(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++) cin >> a[i][j];
	}
	v.clear();
	flag = false;
}

void Try(int i, int j, string s){
	if(i == 1 && j == 1 && a[i][j] == 0){
		flag = false;
		return;
	}
	if(i > n || j > n|| i < 1 || j < 1) return;
	if(i < n && a[i+1][j] && cross[i+1][j] == false){
		cross[i][j] = true;
		Try(i+1, j, s + "D");
		cross[i][j] = false;
	}
	if(j < n && a[i][j+1] && cross[i][j+1] == false){
		cross[i][j] = true;
		Try(i, j+1, s + "R");
		cross[i][j] = false;
	}
	if(i > 1 && a[i-1][j] && cross[i-1][j] == false){
		cross[i][j] = true;
		Try(i-1, j, s + "U");
		cross[i][j]  =false;
	}
	if(j > 1 && a[i][j-1] && cross[i][j-1] == false){
		cross[i][j] = true;
		Try(i, j-1, s + "L");
		cross[i][j] = false;
	}
	if(i == n && j == n && a[n][n]){
		v.push_back(s);
		flag = true;
		return;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		Try(1, 1, "");
		if(!flag){
			cout << -1 << endl;
		}
		else{
			sort(v.begin(), v.end());
			for(auto x : v) cout << x << " ";
			cout << endl;
		}
	}
	return 0;
}