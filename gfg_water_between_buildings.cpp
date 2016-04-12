#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,count;
	cin>>t;
	while(t--)
	{
	    count=0;
	    cin>>n;
	    int arr[n],lmax[n],rmax[n];
	    cin>>arr[0];
	    lmax[0]=rmax[n-1]=0;
	    for(int i=1;i<n;++i)
	    {
	        cin>>arr[i];
	        if((lmax[i-1]>arr[i]) || (arr[i-1]>arr[i]))
                lmax[i]= max(lmax[i-1],arr[i-1]);
            else
                lmax[i]=0;
	    }
	    for(int i=n-2;i>=0;--i)
        {

            if((rmax[i+1]>arr[i]) || (arr[i+1]>arr[i]))
                rmax[i]=max(arr[i+1],rmax[i+1]);
            else
                rmax[i]=0;

        }
        for(int i=0;i<n;++i)
        {
            if((rmax[i]!=0) && (lmax[i]!=0))
               count+= min(rmax[i],lmax[i])-arr[i];
            //cout<<lmax[i]<<" "<<rmax[i]<<" "<<min(rmax[i],lmax[i])<<" "<<count<<"\n";
        }
	    cout<<count<<"\n";
	}
	return 0;
}
