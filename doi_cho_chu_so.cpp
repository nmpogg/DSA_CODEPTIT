#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		int k;
		cin >> k >> s;
		for(int i = 0; i < s.size(); i++){
			char res = s[i+1];
			int idx = i+1;
			for(int j = i+1; j < s.size() && k > 0; j++){
				if(s[j] >= res){ // tim vi tri cua gia tri lon hon s[i] cach xa s[i] nhat
					res = s[j];
					idx = j;
				}
			}
			if(s[i] < res && k > 0){
				swap(s[i], s[idx]);
				k--;
			}
		}
		cout << s << endl;
	}
	return 0;
}