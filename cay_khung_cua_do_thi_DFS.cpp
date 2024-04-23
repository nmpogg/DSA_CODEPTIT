#include<bits/stdc++.h>
using namespace std;

int n, m, u;
int a[1003][1003];
bool chuaxet[1003];

void input(){
	cin >> n >> m >> u;
	memset(a, 0, sizeof(a));
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		a[x][y] = a[y][x] = 1;
	}
	memset(chuaxet, true, sizeof(chuaxet));
}

void Tree_DFS(int u){
	vector<pair<int, int>> dfs;
	stack<int> st;
	st.push(u);
	chuaxet[u] = false;
	while(!st.empty()){
		int s = st.top(); st.pop();
		for(int t = 1; t <= n; t++){
			if(a[s][t] && chuaxet[t]){
				dfs.push_back({s, t});
				st.push(s); st.push(t);
				chuaxet[t] = false;
				break;
			}
		}
	}
	if(dfs.size() == n-1)
		for(auto it : dfs) cout << it.first << " " << it.second << endl;
	else cout  << -1 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		input();
		Tree_DFS(u);
	}
	return 0;
}