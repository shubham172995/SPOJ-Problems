#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int n;
	scanf("%d", &n);
	vector<vector<int> > a(n+1);
	vector<int> h(n+1);
	vector<bool> vis(n+1, false);
	loop(i, 1, n){
		int c, b;
		scanf("%d %d", &c, &b);
		a[c].push_back(b);
		a[b].push_back(c);
	}
	int s=1;
	stack<int> d;
	d.push(s);
	vis[s]=true;
	h[s]=0;
	while(!d.empty()){
		int top=d.top();
		d.pop();
		for(int i=0;i<a[top].size();i++){
			if(!vis[a[top][i]]){
				d.push(a[top][i]);
				vis[a[top][i]]=true;
				h[a[top][i]]=h[top]+1;
			}
		}
	}
	int max=0;
	loop(i, 1, n+1){
		if(max<h[i]){
			max=h[i];
			s=i;
		}
	}
	loop(i, 0, n+1){
		h[i]=0;
		vis[i]=false;
	}
	d.push(s);
	vis[s]=true;
	h[s]=0;
	while(!d.empty()){
		int top=d.top();
		d.pop();
		for(int i=0;i<a[top].size();i++){
			if(!vis[a[top][i]]){
				d.push(a[top][i]);
				vis[a[top][i]]=true;
				h[a[top][i]]=h[top]+1;
			}
		}
	}
	max=0;
	loop(i, 1, n+1){
		if(max<h[i]){
			max=h[i];
		}
	}
	cout<<max<<endl;
	return 0;
}