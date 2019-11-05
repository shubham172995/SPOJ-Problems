#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)


map<int, ll> a;

ll calculate(ll n){
	if(n==0)return 0;
	if(a[n]!=0)
		return a[n];
	ll temp=calculate(n/2)+calculate(n/3)+calculate(n/4);
	a[n]=n>temp?n:temp;
	return a[n];
}

int main(){
	int n;
	while(scanf("%d", &n)==1)
		cout<<calculate(n)<<endl;
	return 0;
}