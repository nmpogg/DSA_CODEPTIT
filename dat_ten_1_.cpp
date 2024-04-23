#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<string> v;
int x[1000];

void Try(int i){
	for(int j = x[i-1]+1; j <= n-k+i; j++){
		x[i] = j;
		if(i == k){
			for(int i = 1; i <= k; i++){
				cout << v[x[i]] << " ";
			}
			cout << endl;
		}
		else Try(i+1);
	}
}

int main(){
	x[0] = 0;
	cin >> n >> k;
	set<string> se;
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		se.insert(s);
	}
	v.push_back("");
	for(auto x : se){
		v.push_back(x);
	}
	n = v.size()-1;
	Try(1);
	return 0;
}