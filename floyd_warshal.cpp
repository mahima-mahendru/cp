#include <bits/stdc++.h>
# define ll long long int
using namespace std;

int main() {
    ll n,m,q;
    //cin>>n>>m; 
    scanf("%lld%lld%lld",&n,&m,&q);
    ll d[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
                d[i][j]=1e18;
                
        }
        d[i][i]=0;
    }
    
    for(int i=0;i<m;i++)
    {
        ll x,y,z;
       // cin>>x>>y>>z;
       scanf("%lld%lld%lld",&x,&y,&z);
       d[x][y]=min(d[x][y],z);
       d[y][x]=min(d[y][x],z);
        
    }
    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(d[i][k]!=1e18 and d[k][j]!=1e18)
                {
                        d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
                }
            }
        }
    }
    while(q--)
    {
        ll x,y;
        scanf("%lld%lld",&x,&y);
        cout<<(d[x][y]>=1e18?-1:d[x][y])<<endl;
    }
    
   
   

}
