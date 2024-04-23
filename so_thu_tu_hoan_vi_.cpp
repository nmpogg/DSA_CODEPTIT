#include <bits/stdc++.h>
using namespace std;

int n, cnt = 1;
char X[12];
bool use[12] = {};
map<string, int> mp;

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(!use[j]){
			X[i] = j + '0';
			use[j] = true;
			if(i == n){
				string res = "";
				for(int k = 1; k <= n; k++){
					res += X[k];
				}
				mp[res] = cnt;
				cnt++;
			}
			else Try(i+1);
			use[j] = false;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		string str = "";
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			str += (x + '0');
		} 
		Try(1);
		cout << mp[str] << endl;
		mp.clear();
		cnt = 1;
	}
	return 0;
}


