#include <bits/stdc++.h>
using namespace std;

int main(){
	queue<int> qe;
	int t;
	cin >> t;
	while(t--){
		string c;
		cin >> c;
		if(c == "PUSH"){
			int x;
			cin >> x;
			qe.push(x);
		}
		if(c == "POP"){
			if(!qe.empty()) qe.pop();
		}
		if(c == "PRINTFRONT"){
			if(qe.empty()) cout << "NONE\n";
			else cout << qe.front() << endl;
		}
	}
	return 0;
}