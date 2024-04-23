#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, X;
		cin >> n >> X;
		bool flag = false;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			if(x == X) flag = true;
		}
		if(flag) cout << "1\n";
		else cout << "-1\n";
	}
	return 0;
}