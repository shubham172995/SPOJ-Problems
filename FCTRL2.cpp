#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		vector<int> a(170);
    	a[0]=1;
    	int m=1;
    	int temp = 0;
    	for(int i=1;i<=n;i++){
        	for(int j=0;j<m;j++){
           		int x = a[j]*i+temp;
            	a[j]=x%10;
            	temp = x/10;
            	//cout<<"Hey"<<a[j]<<endl;
        	}
        	//cout<<"Okay"<<temp<<endl;
    	    while(temp!=0){ 
            	a[m]=temp%10;
            	temp = temp/10;
            	m++;
        	    }
    	    }
    	    //cout<<m<<endl;
    	for(int i=m-1;i>=0;i--)
    		cout<<a[i];
    	cout<<endl;
	}
	return 0;
}