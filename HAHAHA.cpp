#include <bits/stdc++.h>
using namespace std;

int n;
char a[18];

void in(){
	for(int i = 1; i <= n; i++) cout << a[i];
	cout << endl;
}

bool check(){
	if(a[1] != 'H' || a[n] != 'A') return false;
	for(int i = 1; i <= n-1; i++){
		if(a[i] == 'H' && a[i+1] == 'H') return false;
	}
	return true;
}

void Try(int i){
	for(char j = 'A'; j <= 'H'; j += 7){
		a[i] = j;
		if(i == n){
			if(check()) in();
		}
		else Try(i+1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		Try(1);
	}
	return 0;
}
