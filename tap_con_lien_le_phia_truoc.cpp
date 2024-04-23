#include <bits/stdc++.h>
using namespace std;

int n, k, x[1001];
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
			string c;
			cin >> c;
			s += c;
		}
		ans.clear();
		Try(1);
		if(s == ans[0]){
			for(int i = 0; i < k; i++){
				cout << ans.back()[i] << " ";
			}
		}
		else{
			bool flag = false;
			for(int i = 0; i < ans.size(); i++){
				if(s == ans[i]){
					flag = true;
					for(int j = 0; j < k; j++){
						cout << ans[i-1][j] << " ";
					}
					break;
				}
				if(flag) break;
			}
		}
		cout << endl;
	}
}