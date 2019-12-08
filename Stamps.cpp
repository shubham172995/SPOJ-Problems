#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int t;
	cin>>t;
	loop(i, 1, t+1){
		cout<<"Scenario #"<<i<<":\n";
		int a, b;
		cin>>a>>b;
		vector<ll> s(b);
		loop(j, 0, b){
			cin>>s[j];
		}
		sort(s.begin(), s.end());
		ll coll=0;
		int ans=0;
		for(int j=s.size()-1;j>=0;j--){
			coll+=s[j];
			++ans;
			if(coll>=a)
				break;
		}
		if(coll>=a)
			cout<<ans<<endl;
		else cout<<"impossible\n";
		cout<<endl;
	}
	return 0;
}