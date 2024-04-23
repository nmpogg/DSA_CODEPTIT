#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v;
		set<int> se;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			while(x > 0){
				int res = x % 10;
				if(res % 2 == 1) se.insert(res);
				x /= 10;
			}
		}
		if(se.empty()) cout << -1 << endl;
		else{
//			for(auto it : se) v.push_back(it);
//			for(int i = v.size()-1; i >= 0; i--) cout << v[i] << " ";
			for(auto it = se.rbegin(); it != se.begin(); it++) cout << *it << ' ';
			cout << endl;
		}
	}
}