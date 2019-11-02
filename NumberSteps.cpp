#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int x, y;
		scanf("%d %d", &x, &y);
		if(x==y){
			if(x%2==0)
				cout<<x+y<<endl;
			else cout<<x+y-1<<endl;
		}
		else if(x-y==2){
			if(x%2==0)
				cout<<x+y<<endl;
			else cout<<x+y-1<<endl;
		}
		else cout<<"No Number\n";
	}
	return 0;
}