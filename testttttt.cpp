#include <bits/stdc++.h>
using namespace std;

void Bubble_Sort(int n, int a[]){
	for(int i = 0; i < n; i++){
		bool flag = false;
		for(int j = 0; j < n-i-1; j++){
			if(a[j] > a[j+1]){
				flag = true;
				swap(a[j], a[j+1]);
			}
		}
		if(!flag) break;
	}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	Bubble_Sort(n ,a);
	for(int x : a) cout << x << " ";
}