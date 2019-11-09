#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

bool isPalin(string s){
	int i=0, j=s.length()-1;
	bool flag=false;
	while(i<=j){
		if(s[i]!=s[j]){
			flag=true;
			break;
		}
		++i;--j;
	}
	return !flag;
}

int main(){
	int t;
	scanf("%d", &t);
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		if(isPalin(s)){
			if(s.length()%2){
				int i=s.length()/2;
				if(s[i]=='9'){
					s[i]='0';
					int j, k;
					j=i-1;k=i+1;
					while(s[j]=='9'){
						s[k]=s[j]='0';
						--j;++k;
					}
					if(j==-1){
						s="1"+s;
						s[s.length()-1]='1';
					}
					else{
						s[k]=s[j]=s[j]+1;
					}
				}
				else s[i]+=1;
			}
			else{
				int i=(s.length()/2)-1;
				int j=i+1;
				if(s[i]=='9'){
					while(s[i]=='9'){
						s[i]=s[j]='0';
						--i;++j;
					}
					if(i==-1){
						s="1"+s;
						s[s.length()-1]='1';
					}
					else{
						s[i]=s[j]=s[i]+1;
					}
				}
				else s[i]=s[j]=s[i]+1;
			}
		}
		else{
			int l=s.length();
			if(l%2){
				int i=l/2;
				bool flag=false;
				int j=i+1;
				--i;
				while(i>=0){
					if(flag){
						s[j]=s[i];
						--i;
						++j;
					}
					else{
						if(s[i]==s[j]){
							--i;
							++j;
						}
						else if(s[i]>s[j]){
							s[j]=s[i];
							flag=true;
							--i;
							++j;
						}
						else if(s[i]<s[j]){
							//Now, see that when this happens, the sequence from i to j will be a palindrome. We need to increase it to the nearest one. See that.
							if(s[l/2]!='9'){
								s[l/2]+=1;
								s[j]=s[i];
								--i;
								++j;
								flag=true;
							}
							else{
								int x, y;
								x=(l/2)-1;
								y=x+2;
								s[x+1]='0';
								while(s[x]=='9'){
									s[x]='0';
									s[y]='0';
									--x;
									++y;
								}
								s[x]+=1;
								s[y]=s[x];
								flag=true;
							}
						}
					}
				}
			}
			else{
				int i=l/2;
				int j=i-1;
				bool flag=false;
				while(j>=0){
					if(flag){
						s[i]=s[j];
						--j;
						++i;
					}
					else{
						if(s[i]==s[j]){
							++i;
							--j;
						}
						else if(s[i]<s[j]){
							s[i]=s[j];
							++i;
							--j;
							flag=true;
						}
						else if(s[i]>s[j]){
							int x, y;
							x=l/2-1;
							y=x+1;
							while(s[x]=='9'){
									s[x]='0';
									s[y]='0';
									--x;
									++y;
								}
							s[x]+=1;
							s[y]=s[x];
							flag=true;
						}
					}
				}
			}
		}
		cout<<s<<endl;
	}
	return 0;
}