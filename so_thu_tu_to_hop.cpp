#include <bits/stdc++.h>
using namespace std;

int n, k;
int x[16];
vector<string> ans;

void Try(int i){
	for(int j = x[i-1]+1; j <= n-k+i; j++){
		x[i] = j;
		if(i == k){
			string res = "";
			for(int l = 1; l <= k; l++){
				res += to_string(x[l]);
			}
			ans.push_back(res);
		}
		else Try(i+1);
	}
}

int main(){
	int t;
	cin >> t;
	x[0] = 0;
	while(t--){
		cin >> n >> k;
		string s = "";
		for(int i = 0; i < k; i++){
			string x; cin >> x;
			s += x;
		}
		ans.clear();
		Try(1);
		for(int i = 0; i < ans.size(); i++){
			if(s == ans[i]){
				cout << i + 1 << endl;
				break;
			}
		}
	}
}