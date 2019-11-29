#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	ll n;
	cin>>n;
	int temp;
	temp=log2(n);
	if(pow(2, temp)==n){
		cout<<"TAK\n";
	}
	else cout<<"NIE\n";
	return 0;
}