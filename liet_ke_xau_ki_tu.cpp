#include <bits/stdc++.h>
using namespace std;

char c; int n;
string s;

void Try(char a, char b){
	for(a = 'A'; a <= 'D'; a++){
		s += a;
		for(b = 'A'; b <= 'D'; b++){
			s += b;
			cout << s << endl;
			s.erase(s.size()-1);
		}
		s.erase(s.size()-1);
	}
}

int main(){
	cin >> c >> n;
	Try('A', 'A');
	return 0;
}