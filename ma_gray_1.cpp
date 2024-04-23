#include <bits/stdc++.h>
using namespace std;

int n;
int np[12], gray[12];

void trans(){
	gray[1] = np[1];
	for(int i = 2; i <= n; i++){
		if(np[i] != np[i-1]) gray[i] = 1;
		else gray[i] = 0;
	}
	for(int i = 1; i <= n; i++) cout << gray[i];
	cout << " ";
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		np[i] = j;
		if(i == n) trans();
		else Try(i+1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		Try(1);
		cout << endl;
	}
	return 0;
}