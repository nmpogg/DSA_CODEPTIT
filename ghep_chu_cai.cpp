#include <bits/stdc++.h>
using namespace std;

int n;
char c;
string s;
bool use[10] = {};

bool phu_am(char c){
	if(c == 'D' || c == 'B' || c == 'C' || c == 'F' || c == 'G' || c == 'H') return true;
	return false;
}

bool nguyen_am(char c){
	if(c == 'A' || c == 'E') return true;
	return false;
}

bool check(){
	for(int i = 2; i < n; i++){
		if(nguyen_am(s[i]) && phu_am(s[i-1]) && phu_am(s[i+1])) return false;
	}
	return true;
}

void in(){
	for(int i = 1; i <= n; i++) cout << s[i];
	cout << endl;
}

void Try(int i){
	for(char j = 'A'; j <= c; j++){
		if(!use[j]){
			s[i] = j;
			use[j] = true;
			if(i == n){
				if(check()) in();
			}
			else Try(i+1);
			use[j] = false;
		}
	}
}

int main(){
	cin >> c;
	n = c - 'A' + 1;
	Try(1);
	return 0;
}
