#include <bits/stdc++.h>
using namespace std;

int index(int a[], int l , int r){
	int x = a[r];
	int i = l - 1;
	for(int j = l; j < r; j++){
		if(a[j] <= x){
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i+1], a[r]);
	return i+1;
}

void quickSort(int a[], int l, int r){
	if(l >= r) return;
	int idx = index(a, l, r);
	quickSort(a, l , idx - 1);
	quickSort(a, idx + 1, r);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> tmp;
		int a[n];
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			while(x > 0){
				tmp.push_back(x % 10);
				x /= 10;
			}
		}
		int flag[10] = {};
		int cnt = 0;
		for(int i = 0; i < tmp.size(); i++){
			if(!flag[tmp[i]]) a[cnt++] = tmp[i];
			flag[tmp[i]] = 1;
		}		
		quickSort(a, 0, cnt-1);
		for(int i = 0; i < cnt; i++) cout << a[i] << " ";
		cout << endl;
	}
}