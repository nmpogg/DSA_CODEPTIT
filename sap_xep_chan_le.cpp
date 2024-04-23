#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> le, chan;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		if(i % 2 == 0) chan.push_back(x);
		else le.push_back(x);
	}
	sort(chan.begin(), chan.end());
	sort(le.begin(), le.end(), greater<int>());
	for(int i = 0; i < min(chan.size(), le.size()); i++){
		cout << chan[i] << " " << le[i] << " ";
	}
	if(le.size() > chan.size()) cout << le.back();
	else if (chan.size() > le.size()) cout << chan.back();
}