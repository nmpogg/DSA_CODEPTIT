#include <bits/stdc++.h>
using namespace std;

struct cv{
	int fi, se;
};

cv h[100002];

bool cmp(cv a, cv b){
	return a.se < b.se;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> h[i].fi >> h[i].se;
		}
		sort(h, h+n, cmp);
		int cnt = 1, i = 0;
		for(int j = 1; j < n; j++){
			if(h[j].fi >= h[i].se){
				cnt++;
				i = j;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
