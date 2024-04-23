#include <bits/stdc++.h>
using namespace std;

int v, e, s, t;
int a[1005][1005], truoc[1005];
bool chuaxet[1005];

void init(){
	cin >> v >> e >> s >> t;
	memset(a, 0, sizeof(a));
	for(int i = 1; i <= e; i++){
		int x, y;
		cin >> x >> y;
		a[x][y] = 1;
	}
	memset(chuaxet, true, sizeof(chuaxet));
	memset(truoc, 0, sizeof(truoc));
}

void DFS(int u){
	chuaxet[u] = false;
	for(int s = 1; s <= v; s++){
		if(a[u][s] && chuaxet[s]){
			truoc[u] = s;
			DFS(s);
		}
	}
	vector<int> path;
    int j = t;
    while(truoc[j] != 0){
        path.push_back(j);
        j = truoc[j];
    }
    path.push_back(s);
    for(auto x : path) cout << x << " ";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		DFS(s);
		cout << endl;
	}
	return 0;
}