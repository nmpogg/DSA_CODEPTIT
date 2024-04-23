#include <bits/stdc++.h>
using namespace std;

int main(){
	stack<int> st;
	int q;
	cin >> q;
	while(q--){
		string s;
		cin >> s;
		if(s == "PUSH"){
			int n;
			cin >> n;
			st.push(n);
		}
		if(s == "POP"){
			if(!st.empty())
				st.pop();
		}
		if(s == "PRINT"){
			if(st.empty()) cout << "NONE";
			else 
				cout << st.top();
			cout << endl;
		}
	}
}