#include <bits/stdc++.h>
using namespace std;

int solve(){
	int n, s, m;
	cin >> n >> s >> m;
	int lt = m * s;
	int day = s - s/7;
	if(lt > day * n) return -1;
	for(int i = 1; i <= n; i++){
		if(lt <= n * i) return i;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cout << solve() << endl;
	}
	return 0;
}