#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		stringstream ss(s);
		while(ss >> s){
			s[0] = toupper(s[0]);
			for(int i = 1; i < s.size(); i++) s[i] = tolower(s[i]);
			cout << s << " ";
		}
		cout << "\n";
	}
	return 0;
}
