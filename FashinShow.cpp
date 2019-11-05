#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		vector<int> a(n), b(n);
		loop(i, 0, n){
			cin>>a[i];
		}
		loop(i, 0, n){
			cin>>b[i];
		}
		ll sum=0;
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		loop(i, 0, n){
			sum+=a[i]*b[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}