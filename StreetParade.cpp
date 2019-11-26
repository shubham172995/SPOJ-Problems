#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	while(1){
		ll n;
		cin>>n;
		if(!n)
			break;
		vector<ll> a(n);
		lloop(i, 0, n){
			cin>>a[i];
		}
		stack<ll> s;
		ll temp=1;
		//vector<ll> b;
		lloop(i, 0, n){
			bool flag=false;
			if(a[i]==temp){
				//cout<<"Temp "<<temp<<" "<<i<<endl;
				++temp;
				flag=true;
				//b.push_back(a[i]);
			}
			if(!s.empty()&&s.top()==temp){
				while(!s.empty()){
					if(temp==s.top()){
						s.pop();
						++temp;
					}
					else break;
				}
				//cout<<"Top "<<s.top()<<endl;
				//b.push_back(a[i]);
				continue;
			}
			if(!flag)s.push(a[i]);
		}
		//cout<<temp<<" "<<s.top()<<endl;
		if(!s.empty()){
			cout<<"no\n";
		}
		else cout<<"yes\n";
	}
	return 0;
}