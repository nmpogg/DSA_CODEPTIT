#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin , s);
		stringstream ss(s);
		string tmp, a[100];
		int cnt = 0;
		while(ss >> tmp){
			tmp[0] = toupper(tmp[0]);
			for(int i = 1; i < tmp.size(); i++) tmp[i] = tolower(tmp[i]);
			a[cnt++] = tmp;
		}
		for(int i = 1; i < cnt; i++){
			if(i == cnt-1) cout << a[i] << ", ";
			else cout << a[i] << " ";
		}
		for(int i = 0; i < a[0].size(); i++){
			a[0][i] = toupper(a[0][i]);
			cout << a[0][i];
		}
		cout << endl;
	}
	return 0;
}
