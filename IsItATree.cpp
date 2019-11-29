#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)
vector<bool> marked(10001);

void DFS(vector<vector<int> > &a, int s){
	marked[s]=true;
	loop(i, 0, a[s].size()){
		if(!marked[a[s][i]]){
			marked[a[s][i]]=true;
			DFS(a, a[s][i]);
		}
	}
}

int main(){
	int n, m;
	cin>>n>>m;
	vector<vector<int> > a(n+1);
	loop(i, 0, m){
		int x, y;
		cin>>x>>y;
		a[x].push_back(y);
	}
	DFS(a, 1);
	bool ans=false;
	loop(i, 1, n+1){
		if(!marked[i]){
			ans=true;
			break;
		}
	}
	if(!ans&&(n-1==m))
		cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}