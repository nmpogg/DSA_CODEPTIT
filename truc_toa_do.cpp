#include <bits/stdc++.h>
using namespace std;

struct ToaDo{
	int x1, x2;
};

bool cmp(ToaDo a, ToaDo b){
	return a.x2 < b.x2;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ToaDo a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i].x1 >> a[i].x2;
		}
		sort(a, a+n, cmp);
		int cnt = 1, i = 0;
		for(int j = 1; j < n; j++){
			if(a[j].x1 >= a[i].x2){
				cnt++;
				i = j;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}