#include <bits/stdc++.h>
using namespace std;

bool giam(string s){
	for(int i = 0; i < s.size()-1; i++){
		if(s[i] > s[i+1]) return false;
	}
	return true;
}

bool tang(string s){
	for(int i = 0; i < s.size()-1; i++){
		if(s[i] < s[i+1]) return false;
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(giam(s) || tang(s)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
