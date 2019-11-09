#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll sum=0;
		lloop(i, 0, n){
			ll temp;
			cin>>temp;
			sum=((sum%n)+(temp%n))%n;
		}
		if(sum==0)
			cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}