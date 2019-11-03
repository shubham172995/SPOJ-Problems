#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	while(1){
		int n;
		scanf("%d", &n);
		if(n==-1)
			break;
		vector<int> a(n);
		ll sum=0;
		loop(i, 0, n){
			cin>>a[i];
			sum+=a[i];
		}
		if(sum%n!=0)
			cout<<"-1\n";
		else{
			int temp=sum/n;
			sum=0;
			loop(i, 0, n){
				sum+=abs(temp-a[i]);
			}
			cout<<sum/2<<endl;
		}
	}
	return 0;
}