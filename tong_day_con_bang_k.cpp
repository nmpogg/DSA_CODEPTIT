#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], X[100], cnt = 0;
bool OK = true;
void Init(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
}

void Result(){
	for(int i = 1; i <= n; i++){
		if(X[i]) cout << a[i] << " ";
	}
	cout << endl;
}

bool check(){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		if(X[i]) sum += a[i];
	}
	if(sum == k) return true;
	return false;
}

void Next_Bits_String(){
	int i = n;
	while(i > 0 && X[i]){
		X[i] = 0;
		i--;
	}
	if(i > 0) X[i] = 1;
	else OK  = false;
}

int main(){
	Init();
	while(OK){
		if(check()){
			cnt++;
			Result();
		}
		Next_Bits_String();
	}
	cout << cnt;
}