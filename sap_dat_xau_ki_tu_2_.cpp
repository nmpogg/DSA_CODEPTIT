#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<char, int> a, pair<char, int> b){
	return a.second > b.second;
}

void solve(){
	string s;
	int d;
	cin >> d >> s;
	map<char, int> mp;
	vector<pair<char, int>> v;
	for(char x : s)	mp[x]++;
	for(auto it : mp) v.push_back(it);
	sort(v.begin(), v.end(), cmp);
	string ans = string(s.size(), ' ');
	
	for(int i = 0; i < v.size(); i++){
		int pos = i;
		while(ans[pos] != ' ') ++pos;
		for(int j = 0; j < v[i].second; j++){
			if(pos + j * d >= s.size()){
				cout << -1 << endl;
				return;
			} 
			ans[pos + j * d] = v[i].first;
		}
	}
	cout << 1 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}