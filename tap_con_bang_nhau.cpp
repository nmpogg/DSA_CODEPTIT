#include <bits/stdc++.h>
using namespace std;

int n, a[101], x[101];
bool flag;
void input(){
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	flag = false;
}

int check(){
	int sum1 = 0, sum2 = 0;
	for(int i = 1; i <= n; i++){
		if(x[i]){
			sum1 += a[i];
		}
		else sum2 += a[i];
	}
	if(sum1 == sum2) return 1;
	return 0;
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		x[i] = j;
		if(i == n){
			if(check()){
				flag = true;
				return;
			}
		}
		//if(flag) return;
		else Try(i+1);
	}
	if(flag) return;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		input();
		Try(1);
		if(flag) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}