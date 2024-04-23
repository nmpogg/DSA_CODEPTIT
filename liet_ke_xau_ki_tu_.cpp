#include <bits/stdc++.h>
using namespace std;

char c, X[28];
int k;
set<vector<char>> se;

bool cmp(char a, char b){
	return a < b;
}


void Try(int i){
	for(char j = 'A'; j <= c; j++){
		X[i] = j;
		if(i == k){
			vector<char> v;
			for(int l = 1; l <= k; l++){
				v.push_back(X[l]);
			}
			sort(v.begin(), v.end());
			se.insert(v);
		}
		else Try(i+1);
	}
}

int main(){
	cin >> c >> k;
	Try(1);
	for(auto it : se){
		for(auto it2 : it) cout << it2;
		cout << endl;
	}
	return 0;
}