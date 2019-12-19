#include<bits/stdc++.h>
using namespace std;
long long int inv=0;

vector<long long int> merge(vector<long long int>& a, vector<long long int>& b){
	long long int n=a.size()+b.size();int temp=0;
	vector<long long int> c(n);
	/*if(a[0]==1){
		printf("Size of b=%ld %ld %ld %ld\n",b.size(), b[0], b[1], b[2]);
	}*/
	long long int i=0, j=0;
	for(long long int k=0;k<n;k++){
		if((i==a.size())&&(j!=b.size())){
			c[k]=b[j];
			++j;
		}
		else if(j==b.size()&&i!=a.size()){
			c[k]=a[i];
			++i;
		}
		else if(a[i]>b[j]){
			c[k]=b[j];
			inv+=a.size()-i;
			temp+=a.size()-i;
			++j;
		}
		else if(a[i]<b[j]){
			c[k]=a[i];
			++i;
		}
	}
	/*if(a[0]==1){
		printf("%ld %ld %ld\n%d\n", c[0], c[1], c[2], temp);
	}*/
	return c;
}

void inversions(vector<long long int>& a){
	long long int n=a.size();
	if(n==2){
		if(a[0]>a[1]){
			++inv;
			long long int temp=a[1];
			a[1]=a[0];
			a[0]=temp;
		}
	}
	else if(n==1){}
	else{
		n/=2;
		vector<long long int> b(n), c(a.size()-n), d(a.size());
		for(long long int i=0;i<n;i++)
			b[i]=a[i];
		for(long long int i=0;i<c.size();i++)
			c[i]=a[i+n];
		inversions(b);
		inversions(c);
		d=merge(b, c);
		a=d;
	}
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		inv=0;
		long long int n;
		scanf("%lld", &n);
		vector<long long  int> a(n);
		for(int i=0;i<n;i++)
			scanf("%lld", &a[i]);
		inversions(a);
		printf("%lld\n", inv);
	}
	return 0;
}