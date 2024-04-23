#include <bits/stdc++.h>
using namespace std;

char X[10];
vector<string> v;

bool check(){
	if(X[5] == '0') return false;
	if(X[1] == '0' && X[2] == '0') return false;
	if(X[3] == '2') return false;
	if(X[3] == X[4]) return false;
	return true;
}

void save(){
	string res = "";
	for(int i = 1; i <= 8; i++){
		if(i == 3) res += "/";
		if(i == 5) res += "/";
		res += X[i];
	}
	v.push_back(res);
}

void Try(int i){
	for(char j = '0'; j <= '2'; j += 2){
		X[i] = j;
		if(i == 8){
			if(check()) save();
		}
		else Try(i+1);
	}
}

int main(){
	Try(1);
	sort(v.begin(), v.end());
	for(auto it : v){
		cout << it << endl;
	}
	return 0;
}