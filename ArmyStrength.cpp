#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		//cin.ignore();
		int n, m;
		scanf("%d %d", &n, &m);
		priority_queue<int, vector<int>, greater<int> > god, mec;
		loop(i, 0, n){
			int temp;
			scanf("%d", &temp);
			god.push(temp);
		}
		loop(i, 0, m){
			int temp;
			scanf("%d", &temp);
			mec.push(temp);
		}
		/*cout<<"HEY\n";
		while(!god.empty()){
			cout<<god.top()<<" ";
			god.pop();
		}
		cout<<endl;*/
		while(god.size()&&mec.size()){
			int g, m;
			g=god.top();
			m=mec.top();
			if(g>=m)
				mec.pop();
			else god.pop();
		}
		if(god.size())
			cout<<"Godzilla\n";
		else cout<<"MechaGodzilla\n";
	}
	return 0;
}