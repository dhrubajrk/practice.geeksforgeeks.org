#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,n,a,count;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    count=n;
	    int prod[n][n],sum[n][n];
	    for(int i=0;i<n;++i)
	    {
	        cin>>a;
	        prod[0][i]=sum[0][i]=a;
	    }
	    for(int i=1;i<n;++i)
	    {
	        for(int j=0;j<n-i;++j)
	        {
	            prod[i][j]=prod[i-1][j]*prod[0][j+i];
	            sum[i][j]=sum[i-1][j]+sum[0][j+i];
	            if(prod[i][j]==sum[i][j])
                    count++;
	        }
	    }
	    /*for(int i=0;i<n;++i)
	    {
	        for(int j=0;j<n-i;++j)
                cout<<prod[i][j]<<" ";
            cout<<"\n";
	    }
	    for(int i=0;i<n;++i)
	    {
	        for(int j=0;j<n-i;++j)
                cout<<sum[i][j]<<" ";
            cout<<"\n";
	    }
	    */
	    cout<<count<<"\n";
	}
	return 0;
}
