#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		unsigned ll ans=0;
		ll k;
		cin>>k;
		ans=192+(k-1)*250;
		cout<<ans<<endl;
	}
	return 0;
}