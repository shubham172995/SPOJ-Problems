#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int n;
	scanf("%d", &n);
	getc(stdin);
	while(n--){
		string s;
		cin>>s;
		stack<char> a;
		string ans="";
		loop(i, 0, s.length()){
			if(s[i]=='(')
				continue;
			else if(s[i]==')'){
				ans+=a.top();
				a.pop();
			}
			else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^')
				a.push(s[i]);
			else ans+=s[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}