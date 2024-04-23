#include <bits/stdc++.h>
using namespace std;

string s;
int n, x[12];
bool use[12] = {};

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(!use[j]){
			x[i] = j;
			use[j] = true;
			if(i == n){
				for(int k = 1; k <= n ;k++){
					cout << s[x[k]-1];
				}
				cout << " ";
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
		cin >> s;
		n = s.size();
		Try(1);
		cout << endl;
	}
}