#include <bits/stdc++.h>
using namespace std;

int main(){
	deque<int> de;
	int q;
	cin >> q;
	while(q--){
		string s;
		cin >> s;
		if(s == "PUSHFRONT"){
			int x;
			cin >> x;
			de.push_front(x);
		}
		if(s == "PRINTFRONT"){
			if(de.empty()) cout << "NONE\n";
			else cout << de.front() << endl;
		}
		if(s == "POPFRONT"){
			if(!de.empty()){
				de.pop_front();
			}
		}
		if(s == "PUSHBACK"){
			int x;
			cin >> x;
			de.push_back(x);
		}
		if(s == "PRINTBACK"){
			if(de.empty()) cout << "NONE\n";
			else cout << de.back() << endl;
		}
		if(s == "POPBACK"){
			if(!de.empty()) de.pop_back();
		}
	}
}