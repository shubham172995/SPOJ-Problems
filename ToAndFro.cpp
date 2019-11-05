#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int n;
	while(1){
		scanf("%d", &n);
		if(n==0)
			break;
		string s;
		cin>>s;
		int temp=0;
		string str="";
		loop(i, 0, n){
			int j=0;
			temp=0;
			while(j<s.length()){
				if(temp==0){
					temp=1;
					str+=s[i+j];
					j+=n;
				}
				else if(temp==1){
					temp=0;
					str+=s[j+n-1-i];
					j+=n;
				}
			}
		}
		cout<<str<<endl;
	}
	return 0;
}