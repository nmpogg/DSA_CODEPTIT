#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		map<char, int> mp;
		for(int i = 0; i < s.size(); i++){
			mp[s[i]]++;
		}
		int max_pre = 0;
		for(auto it : mp){
			max_pre = max(max_pre, it.second);
		}
		int remain = s.size() - max_pre;
		if(remain >= max_pre - 1) cout << 1;
		else cout << -1;
		cout << endl;
	}
	return 0;
}