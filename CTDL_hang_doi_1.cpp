#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		vector<int> qe;
		int q;
		cin >> q;
		while(q--){
			int n;
			cin >> n;
			if(n == 1) cout << qe.size() << endl;
			else if(n == 2){
				if(qe.empty()) cout << "YES\n";
				else cout << "NO\n";
			}
			else if(n == 3){
				int x;
				cin >> x;
				qe.push_back(x);
			}
			else if(n == 4){
				if(!qe.empty()) qe.erase(qe.begin());
			}
			else if(n == 5){
				if(!qe.empty()) cout << qe[0] << endl;
				else cout << "-1\n";
			}
			else if(n == 6){
				if(!qe.empty()) cout << qe[qe.size()-1];
				else cout << -1;
				cout << endl;
			}
		}
		cout << endl;
	}
}