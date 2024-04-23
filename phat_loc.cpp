#include <bits/stdc++.h>
using namespace std;

int n;
char a[18];

void in(){
	for(int i = 1; i <= n; i++) cout << a[i];
	cout << endl;
}

bool check(){
	if(n < 6) return false;
	if(a[1] == '6' || a[n] == '8') return false;
	for(int i = 1; i <= n-1; i++){
		if(a[i] == '8' && a[i+1] =='8') return false;
	}
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] == '6'){
			cnt++;
			if(cnt > 3) return false;
		}
		else cnt = 0;
	}
	return true;
}

void Try(int i){
	for(char j = '6'; j <= '8'; j += 2){
		a[i] = j;
		if(i == n){
			if(check()){
				in();
			}
		}
		else Try(i+1);
	}
}

int main(){
	cin >> n;
	Try(1);
	return 0;	
}
