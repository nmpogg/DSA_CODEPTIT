#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int m, n, p;
		cin >> m >> n >> p;
		string a = "", b = "";
		char c[p];
		for(int i = 0 ; i < m; i++){
			int x;
			cin >> x;
			a += x - '0';
		}
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			b += x - '0';
		}
		for(int i = 0; i < p; i++){
			cin >> c[i];
		}
		bool flag = false;
		for(int i = 0; i < p; i++){
			if(a.find(c[i]) != string::npos && b.find(c[i]) != string::npos){
				flag = true;
				cout << c[i] << " ";
				a.erase(a.find(c[i]));
				b.erase(b.find(c[i]));
			}
		}
		if(!flag) cout << "NO";
		cout << endl;
	}
	return 0;
}