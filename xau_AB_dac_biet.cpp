#include <bits/stdc++.h>
using namespace std;

int n, k, ct = 0;
char a[100];
char kq[1000][100];

void in(){
	ct++;
	for(int i = 1; i <= n; i++){
		kq[ct][i] = a[i];
	}
}

bool check(){
	int cnt = 0, dem_so_chuoi = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] == 'A'){
			cnt++;
			if(cnt > k) return false;
			if(cnt == k) dem_so_chuoi++;
		}
		else{
			cnt = 0;
		}
	}
	if(dem_so_chuoi == 1) return true;
	return false;
}

void Try(int i){
	for(char j = 'A' ; j <= 'B'; j++){
		a[i] = j;
		if(i == n){
			if(check())	in();		
		}
		else Try(i+1);
	}
}

int main(){
	cin >> n >> k;
	Try(1);
	cout << ct << endl;
	for(int i = 1; i <= ct; i++){
		for(int j = 1; j <= n; j++) cout << kq[i][j];
		cout << endl;
	}
	return 0;
}
