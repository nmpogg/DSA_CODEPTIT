#include <bits/stdc++.h>
using namespace std;

int n, x;
vector<vector<int>> kq;
vector<int> res;
bool flag;

void Try(vector<int> v, int i, int tmp){
	if(tmp > x) return;
	if(tmp == x){
		flag = true;
		for(int j = 0; j < v.size(); j++){
			res.push_back(v[j]);
		}
		kq.push_back(res);
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
		if(!flag) cout << -1 << endl;
		else{
			cout << kq.size();
			for(auto it : kq){
				cout << " {";
				for(int i = 0; i < it.size()-1; i++){
					cout << it[i] << " ";
				}
				cout << it.back() << "} ";
			}
			cout << endl;
		}
		kq.clear();
	}
	return 0;
}