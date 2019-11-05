#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a;
		ll b;
		cin>>a>>b;
		if(b==0){
			cout<<"1\n";
			continue;
		}
		map<int, int> m, n;
		int ans=a%10, temp=a%10;
		n[ans]=1;
		int i=2;
		while(i<=b){
			ans=ans*temp;
			ans=ans%10;
			if(n[ans])
				break;
			n[ans]=1;
			++i;
		}
		--i;
		int j=b%i;
		ans=1;
		i=j==0?i:j;
		while(i--){
			ans*=temp;
			ans%=10;
		}
		cout<<ans<<endl;
	}
	return 0;
}