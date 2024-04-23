#include <bits/stdc++.h>
using namespace std;

int n, x;
vector<int> res;
bool flag;

void Try(vector<int> v, int i = 0, int tmp = 0){
	if(tmp > x) return;
	if(tmp == x){
		flag = true;
		cout << "[";
		for(int j = 0; j < res.size()-1; j++){
			cout << res[j] << " ";
		}
		cout << res.back() << "]";
		return;
	}
	for(int j = i; j < n; j++){
		res.push_back(v[j]);
		Try(v, j, tmp + v[j]);
		res.pop_back();
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		flag = false;
		cin >> n >> x;
		vector<int> v(n);
		for(int i = 0; i < n; i++) cin >> v[i];
		sort(v.begin(), v.end());
		Try(v, 0, 0);
		if(!flag) cout << "-1";
		cout << endl;
		res.clear();
	}
	return 0;
}