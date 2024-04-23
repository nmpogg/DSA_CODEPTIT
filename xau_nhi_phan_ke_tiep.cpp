#include <bits/stdc++.h>
using namespace std;

bool chc(string s){
	for(int i = 0; i < s.size(); i++){
		if(s[i] != '1') return false;
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(chc(s)){
			for(int i = 0; i < s.size(); i++) cout << 0;
			cout << endl;
		}
		else{
			int idx;
			for(int i = s.length()-1; i >= 0; i--){
				if(s[i] == '0'){
					idx = i;
					break;
				}
			}
			s[idx] = '1';
			for(int i = idx+1; i < s.length(); i++) s[i] = '0';
			cout << s << endl;
		}
	}
	return 0;
}
