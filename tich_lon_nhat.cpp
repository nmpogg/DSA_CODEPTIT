#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	sort(a, a+n);
	long long sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0, sum6 = 0;
	sum1 = a[n-1] * a[n-2] * a[n-3];
	sum2 = a[n-1] * a[n-2];
	sum3 = a[0] * a[1];
	sum4 = a[0] * a[1] * a[2];
	sum5 = a[n-1] * a[0] * a[1];
	cout << max(sum1, max(sum2, max(sum3, max(sum4, sum5))));
	return 0;
}