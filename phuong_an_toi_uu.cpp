#include <bits/stdc++.h>
using namespace std;

int n, w, gt, ans = 0;
int a[101], c[101], X[101];
int XOPT[101];

int check(){
	int kl = 0;
	gt = 0;
	for(int i = 1; i <= n; i++){
		if(X[i]){
			kl += a[i];
			if(kl > w) return 0;
			gt += c[i];
		}
	}
	return 1;
}

void update(){
	ans = gt;
	for(int i = 1; i <= n; i++){
		XOPT[i] = X[i];
	}
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		X[i] = j;
		if(i == n){
			if(check()){
				if(gt > ans){
					update();
				}
			}
		}
		else Try(i+1);
	}
}

int main(){
	FILE *data;
    data = fopen("data.in", "r");
	data >> n >> w;
	for(int i = 1; i <= n; i++) data >> c[i];
	for(int i = 1; i <= n; i++) data >> a[i];
	Try(1);
	cout << ans << endl;
	for(int i = 1; i <= n; i++) cout << XOPT[i] << " ";
	return 0;
}