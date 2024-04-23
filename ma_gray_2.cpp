#include <bits/stdc++.h>
using namespace std;
// np[i] = gray[i] so voi np[i-1] , bang 1 khac 0
string trans(string gr){
	string np = gr;
	for(int i = 1; i <= gr.size(); i++){
		if(gr[i] != np[i-1]) np[i] = '1';
		else np[i] = '0';
	}
	return np;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << trans(s) << endl;
	}
	return 0;
}