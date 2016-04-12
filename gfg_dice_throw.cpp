#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,x;
    cout<<(1<<0);
    cin>>t;

    while(t--)
    {
        cin>>m>>n>>x;
        int DP[n+1][x+1];
        memset(DP,0,sizeof(DP));
        for(int i=0;(i<=m) && (i<=x);++i)
        {
            DP[1][i]=1;
        }
        for(int i=2;i<=n;++i)
        {
            for(int j=1;j<=x;++j)
            {
                for(int k=1;k<=m && k < j;++k)
                {
                    DP[i][j]+=DP[i-1][j-k];
                }
            }
        }
        cout<<DP[n][x]<<"\n";
    }
return 0;
}
