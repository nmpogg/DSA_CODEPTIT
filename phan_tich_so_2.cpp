#include <bits/stdc++.h>
using namespace std;

vector<int> v;
vector<vector<int>> kq;
int sum, cnt;

void display(){
	cout << "(";
		for(int i = 0; i < v.size(); i++){
			cout << v[i];
			if(i < v.size()-1) cout << " ";
			else cout << ")";
		}
		cout << " ";
}

void Try(int n, int max){
	if(n == 0){
		cnt++;
		kq.push_back(v);
	}
	
	for(int i = min(n, max); i >= 1; i--){
		v.push_back(i);
		Try(n-i, i);
		v.pop_back();
	}
}

int main(){
	int t;
	cin >> t;
	sum = 0;
	while(t--){
		cnt = 0;
		kq.clear();
		int n;
		cin >> n;
		Try(n, n);
		cout << cnt << endl;
		for(auto it : kq){
			cout << "(";
			for(int i = 0; i < it.size(); i++){
				cout << it[i];
				if(i < it.size()-1) cout << " ";
				else cout << ")";
			}
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}