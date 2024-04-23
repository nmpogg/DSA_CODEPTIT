#include <bits/stdc++.h>
using namespace std;

int n, a[10000], t;

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

bool cmp(int a, int b){
	return a < b;
}

bool chc(){
	for(int i = 1; i <= n; i++){
		if(a[i] != n-i+1) return false;
	}
	return true;
}

void next(){
	for(int i = n; i >= 1; i--){
		if(a[i] > a[i-1]){
			t = i;
			break;
		}
	}
	swap(a[t-1], a[min_a()]);
	sort(a+t, a+n, cmp);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++) cin >> a[i];
		next();
		if(chc()){
			for(int i = 1; i <= n; i++) cout << i << " ";
		}
		else for(int i = 1; i <= n; i++) cout << a[i] << " ";
		cout << endl;
	}
}
