#include <bits/stdc++.h>
using namespace std;

int prime[1000001];
vector<int> res;

void sieve() {
    for(int i = 0; i <= 1000000; i++){
    	prime[i] = 1;
	}
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= 1000; i++) {
        if(prime[i]){
            for(int j = i * i; j <= 1000000; j += i) {
                prime[j] = 0;
            }
        }
    }
}

int main(){
	sieve();
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		int f, s;
		bool flag = false;
		for(int i = 2; i <= n; i++){
			if(prime[i] && prime[n-i]){
				flag = true;
				f = i; s = n-i;
				break;
			}
		}
		if(!flag) cout << "-1\n";
		else cout << f << " " << s << endl;
	}
	return 0;
}