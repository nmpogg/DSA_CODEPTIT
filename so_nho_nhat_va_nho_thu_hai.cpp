#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		set<int> se;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			se.insert(x);
		}
		if(se.size() < 2) cout << -1 << endl;
		else{
			int cnt = 0;
			for(auto it : se){
				cout << it << " ";
				cnt++;
				if(cnt == 2) break;
			}
			cout << endl;
		}
	}
	return 0;
}