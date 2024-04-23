#include <bits/stdc++.h>
using namespace std;

string trans(string np){
	string gray = np;
	for(int i = 1; i < np.size(); i++){
		if(np[i] != np[i-1]) gray[i] = '1';
		else gray[i] = '0';
	}
	return gray;
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