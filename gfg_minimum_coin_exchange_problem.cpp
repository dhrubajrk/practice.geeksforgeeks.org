#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k,min,sl;
	cin>>t;
	while(t--)
	{
	    cin>>k>>n;
	    int C[n];
	    for(int i=0;i<n;++i)
	        cin>>C[i];
	    int R[k+1];
	    R[0]=0;
	    for(int i=1;i<=k;++i)
	        R[i]=INT_MAX;
	    for(int i=1;i<=k;++i)
	    {
	        for(int j=0;j<n;++j)
	        {
	            if(i>=C[j])
	            {
	                sl= R[i-C[j]];
	                if(sl!=INT_MAX && sl+1<R[i])
	                    R[i]=sl+1;
	            }
	        }
	    }
	    if(R[k]!=INT_MAX)
	        cout<<R[k]<<"\n";
	    else
	        cout<<"-1\n";
	}
	return 0;
}
