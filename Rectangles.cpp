#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int n;
	scanf("%d", &n);
	int temp=sqrt(n);
	temp=n/temp;
	int ans=n;
	loop(i, 2, n){
		if(n/i==1)
			break;
		else
			ans+=((n/i)-(i-1))>0?((n/i)-(i-1)):0;
		//cout<<ans<<" "<<i<<endl;
	}
	cout<<ans<<endl;
	return 0;
}