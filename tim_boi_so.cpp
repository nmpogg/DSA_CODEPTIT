#include <bits/stdc++.h>
using namespace std;

int n, k;
long long ans;
bool flag;

void Try(int i){
	if(flag) return;
	for(int j = 0; j <= 9; j+=9){
		ans = ans * 10 + j;
		if(i == k){
			if(ans % n == 0 && ans){				
				cout << ans << endl;
				flag = true;
				return;
			}
		}
		else Try(i+1);
		ans /= 10;
	}
}


int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		ans = 0;
		flag = false;
		for(k = 1; k < 18; k++){
			Try(1);
			if(flag) break;
		}
	}
	return 0;
}