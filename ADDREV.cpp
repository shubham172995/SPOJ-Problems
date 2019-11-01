#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll rev(ll a){
	ll temp=0;
	while(a){
		int t=a%10;
		temp=temp*10+t;
		a/=10;
	}
	return temp;
}

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		ll a, b;
		cin>>a>>b;
		a=rev(a);
		b=rev(b);
		ll c=a+b;
		c=rev(c);
		cout<<c<<endl;
	}
	return 0;
}