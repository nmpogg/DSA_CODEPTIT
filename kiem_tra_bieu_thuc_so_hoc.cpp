#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<char> st;
		int cnt = 0, res = 0;
		for(char c : s) st.push(c);
		char tmp = st.top();
		st.pop();
		while(!st.empty()){
			char c = st.top();
			st.pop();
			if(c == '(') cnt++;
			if(c == tmp  && c  == '(') res++;
			if(c == ')') cnt--;
		//	if(c == tmp  && c  == ')' res--;
			tmp = c;
		}
		if(res) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}