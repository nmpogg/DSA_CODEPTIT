#include <bits/stdc++.h>
using namespace std;

int a[10][10], X[10], Cot[10] = {}, Xuoi[30] = {}, Nguoc[30] = {};
int res;

void Try(int i){
	for(int j = 1; j <= 8; j++){
		if(!Cot[j] && !Xuoi[i-j+8] && !Nguoc[i+j-1]){
			X[i] = j;
			Cot[j] = 1;
			Xuoi[i-j+8] = 1;
			Nguoc[i+j-1] = 1;
			if(i == 8){
				int sum = 0;
				for(int k = 1; k <= 8; k++){
					sum += a[k][X[k]];
				}
				if(sum > res) res = sum;
			}
			else Try(i+1);
			Cot[j] = 0;
			Xuoi[i-j+8] = 0;
			Nguoc[i+j-1] = 0;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		res = 0;
		for(int i = 1; i <= 8; i++){
			for(int j = 1; j <= 8; j++) cin >> a[i][j];
		}
		Try(1);
		cout << res << endl;
	}
	return 0;
}