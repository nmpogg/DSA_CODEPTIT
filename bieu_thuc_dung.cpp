#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int cnt = 0, ans = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '[') cnt++;
			if(s[i] == ']') cnt--;
			if(cnt < 0){
				for(int j = i+1; j < s.size(); j++){
					if(s[j] == '['){
						ans += j - i;
						swap(s[i], s[j]);
						cnt = 1;
//						i++; cnt = 0;
						break;
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}