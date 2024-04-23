#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;
	string str;
	while(cin >> str){
		if(str == "push"){
			int n;
			cin >> n;
			v.push_back(n);
		}
		if(str == "show"){
			if(v.empty()) cout << "empty";
			else
				for(auto x : v) cout << x << " ";
			cout << endl;
		}
		if(str == "pop") v.pop_back();
	}
	return 0;
}