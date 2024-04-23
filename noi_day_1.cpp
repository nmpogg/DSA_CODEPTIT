#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		multiset<int> se;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			se.insert(x);
		}
		long long sum = 0;
		while(se.size() > 1){
			int y = *se.begin();
			se.erase(se.begin());
			int z = *se.begin();
			se.erase(se.begin());
			sum += y + z;
			se.insert(y+z);
		}
		cout << sum << endl;
	}
	return 0;
}