#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int sum;

void Try(int n, int max){
	if(n == 0){
		cout << "(";
		for(int i = 0; i < v.size(); i++){
			cout << v[i];
			if(i < v.size()-1) cout << " ";
			else cout << ")";
		}
		cout << " ";
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
		int n;
		cin >> n;
		Try(n, n);
		cout << endl;
	}
	return 0;
}