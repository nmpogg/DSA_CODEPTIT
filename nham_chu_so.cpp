#include <bits/stdc++.h>
using namespace std;

int be(string a, string b){
	for(int i = 0; i < a.size(); i++){
		if(a[i] == '6') a[i] = '5';
	}
	for(int i = 0; i < b.size(); i++){
		if(b[i] == '6') b[i] = '5';
	}
	int A, B;
	A = stoi(a);
	B = stoi(b);
	return A + B;
}

int lon(string a, string b){
	for(int i = 0; i < a.size(); i++){
		if(a[i] == '5') a[i] = '6';
	}
	for(int i = 0; i < b.size(); i++){
		if(b[i] == '5') b[i] = '6';
	}
	int A, B;
	A = stoi(a);
	B = stoi(b);
	return A + B;
}

int main(){
	string a, b;
	cin >> a >> b;
	cout << be(a, b) << " " << lon(a, b);
	return 0;
}