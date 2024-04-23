#include <bits/stdc++.h>
using namespace std;

int n, t;
int a[82];
bool chc(){
	for(int i = 1; i <= n-1; i++){
		if(a[i] < a[i+1]) return false;
	}
	return true;
}

int min_a(){
	int min = 1e9, res;
	for(int i = t; i <= n; i++){
		if(a[i] < min && a[i] > a[t-1]){
			min = a[i];
			res = i;
		}
	}
	return res;
}

void solve(){
	for(int i = n; i >= 1; i--){
		if(a[i] > a[i-1]){
			t = i;
			break;
		}
	}
	swap(a[t-1], a[min_a()]);
	sort(a+t, a+n+1);
}
int main(){
	int TC;
	cin >> TC;
	for(int i = 1; i <= TC; i++){
		int x;
		cin >> x;
		string s;
		cin >> s;
		n = s.size();
		for(int i = 1; i <= n; i++){
			a[i] = s[i-1] - '0';
		}
		if(chc()) cout << x << " BIGGEST\n";
		else{
			solve();
			cout << x << " ";
			for(int i = 1; i <= n; i++) cout << a[i];
			cout << endl;
		}
	}
	return 0;
} 
