#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(s[i] == 'X'){
			for(int j = i + 1; j < n; j++){
				if(s[j] == 'D') cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}