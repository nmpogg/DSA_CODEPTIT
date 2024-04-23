#include <bits/stdc++.h>
using namespace std;

int n;
char str[12] = "";

void in(){
	for(int i = 1; i <= n; i++) cout << str[i];
	cout << " ";
}

void Try(int i){
	for(char j = 'A'; j <= 'B'; j++){
		str[i] = j;
		if(i == n) in();
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
