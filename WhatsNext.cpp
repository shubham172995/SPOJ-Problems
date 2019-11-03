#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	while(1){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if(a==0&&b==0&&c==0)
			break;
		if(b-a==c-b){
			cout<<"AP "<<(c+(c-b))<<endl;
		}
		else if(b/a==c/b){
			cout<<"GP "<<(c*(c/b))<<endl;
		}
	}
	return 0;
}