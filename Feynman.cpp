#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	vector<ll> a(105);
	a[0]=0;a[1]=1;
	loop(i, 2, 105)
		a[i]=(i*i)+a[i-1];
	while(1){
		int n;
		scanf("%d", &n);
		if(n==0)
			break;
		else cout<<a[n]<<endl;
	}
	return 0;
}