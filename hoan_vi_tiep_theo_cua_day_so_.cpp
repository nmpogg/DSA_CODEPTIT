#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int x;
		string s;
		cin >> x >> s;
		if(next_permutation(s.begin(), s.end())){
			cout << x << " " << s << endl;
		}
		else cout << x << " BIGGEST\n";
	}
}
