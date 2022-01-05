#include<bits/stdc++.h>
using namespace std;
vector<int> a[2005];
int d[200005];
void bfs(){
	int v;
	queue<int> q;
	q.push(1);
	d[1] = 1;
	while(!q.empty()){
		v = q.front();
		q.pop();
		for(int i = 0 ;i<a[v].size();i++){
			int u = a[v][i];
			if(d[u]==0){
				d[u] = d[v] + 1;
				q.push(i);
			}
		}
	}
}
int main(){
	int n , m;
	cin >> n >> m;
	while(m--){
		int p , q;
		cin >> p >> q;
		a[p].push_back(q);
		a[q].push_back(p);		
	}
	bfs();
	for(int i = 1; i<=n;i++){
		cout << d[i] << " ";
	}
}
