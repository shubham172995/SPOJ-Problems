#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int t=10;
	while(t--){
		string s, str;
		cin>>s>>str;
		if(s==str){
			cout<<s<<endl<<"0\n";
			continue;
		}
		vector<int> a(s.length()), b(s.length()), c(str.length());
		loop(i, 0, s.length())
			a[i]=s[i]-'0';
		loop(i, 0, str.length())
			c[i]=str[i]-'0';
		int carry=0;
		loop(i, 0, a.size()){
			if(a[i]%2){
				a[i]=a[i]+carry*10;
				a[i]/=2;
				carry=1;
			}
			else{
				a[i]=a[i]+carry*10;
				a[i]/=2;
				carry=0;
			}
		}
		b=a;
		if(carry==1){
			int i=a.size()-1;
			while(carry){
				a[i]+=carry;
				carry=a[i]/10;
				a[i]%=10;
				--i;
			}
			i=c.size()-1;
			carry=1;
			while(carry){
				if(c[i]==0)
					c[i]=9;
				else{
					c[i]-=1;
					carry=0;
				}
			}
		}
		carry=0;
		loop(i, 0, c.size()){
			if(c[i]%2){
				c[i]=c[i]+carry*10;
				c[i]/=2;
				carry=1;
			}
			else{
				c[i]=c[i]+carry*10;
				c[i]/=2;
				carry=0;
			}
		}
		/*loop(i, 0, a.size()){
			cout<<a[i];
		}
		cout<<endl;
		loop(i, 0, b.size()){
			cout<<b[i];
		}
		cout<<endl;*/
		int i=a.size()-1;
		int j=c.size()-1;
		int ca=0, cb=0;
		while(i>=0){
			a[i]+=ca;
			if(j>=0)
				a[i]+=c[j];
			ca=a[i]/10;
			a[i]%=10;
			b[i]=b[i]-cb;
			if(j>=0)
				b[i]-=c[j];
			if(b[i]<0){
				b[i]+=10;
				cb=1;
			}
			else{
				cb=0;
			}
			--i;
			--j;
		}
		i=0;
		while(a[i]==0)
			++i;
		loop(j, i, a.size()){
			cout<<a[j];
		}
		cout<<endl;
		i=0;
		while(b[i]==0)
			++i;
		loop(j, i, b.size()){
			cout<<b[j];
		}
		cout<<endl;
		/*loop(i, 0, c.size()){
			cout<<c[i];
		}
		cout<<endl;*/
	}
	return 0;
}