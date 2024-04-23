#include <bits/stdc++.h>
using namespace std;

int n, cnt, A[12] = {}, Xuoi[50] = {}, Nguoc[50] = {}, X[12];

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(!A[j] && !Xuoi[i-j+n] && !Nguoc[i+j-1]){
			X[i] = j;
			A[j] = 1;
			Xuoi[i-j+n] = 1;
			Nguoc[i+j-1] = 1;
			if(i == n) cnt++;
			else Try(i+1);
			A[j] = 0;
			Xuoi[i-j+n] = 0;
			Nguoc[i+j-1] = 0;			
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cnt = 0;
		cin >> n;
		Try(1);
		cout << cnt << endl;
	}
	return 0;
}