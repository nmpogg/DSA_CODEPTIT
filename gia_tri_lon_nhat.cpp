#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int sum = 0;
	for(int i = 0; i < n; i++){
		int x; cin >> x;	     
		if(x > 0) sum += x * 2;
	}                     
	cout << sum;
	return 0; 
}
	 