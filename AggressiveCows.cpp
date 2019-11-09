#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

ll canBePut(vector<ll> &a, ll n, ll dis, ll c){
	ll placed=1, last=a[0];
	lloop(i, 1, n){
		if(a[i]-last>=dis){
			last=a[i];
			++placed;
			if(placed==c)
				return true;
		}
	}
	return false;
}

ll binarySearch(vector<ll> &a, ll n, ll c){
	ll mid, low, high;
	low=0;high=a[n-1]-a[0];
	while(low<high){
		mid=(low+high+1)/2;
		if(canBePut(a, n, mid, c))low=mid;
		else high=mid-1;
		//cout<<low<<" "<<mid<<" "<<high<<endl;
	}
	return low;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n, c;
		cin>>n>>c;
		vector<ll> a(n);
		lloop(i, 0, n){
			cin>>a[i];
		}
		sort(a.begin(), a.end());
		cout<<binarySearch(a, n, c)<<endl;
	}
	return 0;
}