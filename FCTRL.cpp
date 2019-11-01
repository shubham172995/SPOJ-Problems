#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll temp=5;
		ll ans=0;
		while(temp<=n){
			ans+=n/temp;
			temp*=5;
		}
		cout<<ans<<endl;
	}
	return 0;
}