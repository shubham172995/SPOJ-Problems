#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

#include<stdio.h>
int main()
{
    float c;
    scanf("%f",&c);
    while(c)
    {
        float len=0.00;
        int n=0;
        while(len<c)
        {   n++;  // n is increased before calc len
            len+=1.00/(1.00+n);

        }
        printf("%d card(s)\n",n);
        scanf("%f",&c);
    }
   return 0;
}
