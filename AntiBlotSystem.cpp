#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		cin.ignore();
		string s;
		getline(cin, s);
		int a=0, b=0, c=0, k=0;
		loop(i, 0, s.length()){
			if(s[i]=='m'){
				if(k==0)
					a=0;
				else if(k==1)
					b=0;
				else c=0;
				loop(j, i+1, s.length()){
					if(s[j]==' '||j==s.length()-1){
						i=j;
						break;
					}
				}
				continue;
			}
			else if(s[i]=='+'||s[i]=='='){
				++k;
				continue;
			}
			else if(s[i]==' ')
				continue;
			if(k==0){
				a=a*10+(s[i]-'0');
			}
			else if(k==1){
				b=b*10+(s[i]-'0');
			}
			else{
				c=c*10+(s[i]-'0');
			}
		}
		if(a==0){
			a=c-b;
		}
		else if(b==0){
			b=c-a;
		}
		else{
			c=a+b;
		}
		cout<<a<<" + "<<b<<" = "<<c<<endl;
	}
	return 0;
}