#include <bits/stdc++.h>
# define ll long long int
using namespace std;
ll prime[1000001];

void s()
{
    prime[1]=0;
    prime[2]=1;
    prime[3]=1;
    for(ll i=2;i<=1000000;i++)
    {
        if(prime[i])
        {
            for(ll j=i*i;j<=1000000;j+=i)
                prime[j]=0;
        }
    }
}
int main()
{
    memset(prime,-1,sizeof(prime));
    sieve();
 
}
