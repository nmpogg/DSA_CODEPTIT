#include <bits/stdc++.h>
using namespace std;

int n;
string x;

bool check_0(int t){
	for(int i = t+1; i <= n; i++){
		if(x[i] == '1') return false;
	}
	return true;
}

bool chd(){
	for(int i = 0; i < n; i++){
		if(x[i] == '1') return false;
	}
	return true;
}

void in(){
	cout << x << endl;
}

void before(){
	int t;
	for(int i = n; i >= 1; i--){
		if(x[i] == '1'){
			t = i;
			break;
		}
	}
	x[t] = '0';
	if(check_0(t)){
		for(int i = t+1; i <= n; i++) x[i] = '1';
	}
	in();
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> x;
		n = x.size();
		if(chd()){
			for(int i = 0; i < n; i++) cout <<'1';
			cout << endl;
		}
		else before();
	}
	return 0;
}
