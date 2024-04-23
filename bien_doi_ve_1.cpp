#include <bits/stdc++.h>
using namespace std;

int n, cnt, idx;

void back_track(int n){
	if(n == 1){
		if(cnt < idx) idx = cnt;
		return;
	}
	if(n % 2 == 0){
		cnt++;
		back_track(n/2);
		n *= 2;
		cnt--;
	}
	if(n % 3 == 0){
		cnt++;
		back_track(n/3);
		n *= 3;
		cnt--;
	}
	if(n % 2 != 0 && n % 3 != 0){
		cnt++;
		back_track(n-1);
		n += 1;
		cnt--;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		cnt = 0;
		idx = 1e9;
		back_track(n);
		cout << idx << endl;
	}
	return 0;
}