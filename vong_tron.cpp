#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	map<char, int> mp1;
	map<char, int> mp2;
	for(int i = 0; i < s.size(); i++)
	if(!mp1[s[i]]){
		mp1[s[i]] = i + 1;
	}
	else mp2[s[i]] = i + 1;
	int cnt = 0;
	for(char i ='A'; i <= 'Z'; i++){
		for(char j = 'A'; j <= 'Z'; j++){
			if(mp1[i] < mp1[j] && mp2[i] > mp1[j] && mp2[i] < mp2[j])
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
