#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	while(1){
		string n;
		cin>>n;
		if(n[0]=='0')
			break;
		if(n.length()==1){
			cout<<"1\n";
			continue;
		}
		vector<ll> a(n.length()+1);
		a[1]=1;
		int temp=(n[1]-'0')+((n[0]-'0')*10);
		if(temp>=11&&temp<=26&&temp!=20)
			a[2]=2;
		else if(temp>26&&temp%10==0)
			a[2]=0;
		else a[2]=1;
		loop(i, 2, n.length()){
			temp=(n[i]-'0')+((n[i-1]-'0')*10);
			if(n[i]-'0')
				a[i+1]=a[i];
			if(temp>=10&&temp<=26)
				a[i+1]+=a[i-1];
		}
		cout<<a[n.length()]<<endl;
	}
	return 0;
}