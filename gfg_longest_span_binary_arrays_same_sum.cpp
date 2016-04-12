#include <iostream>
using namespace std;

int main() {
	int t,n,maxLen,currDiff,ps1,ps2,res;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int arr1[n],arr2[n],diff[2*n+1];
	    for(int i=0;i<n;++i)
	        cin>>arr1[i];
	    for(int i=0;i<n;++i)
	        cin>>arr2[i];
	    for(int i=0;i<2*n+1;++i)
	        diff[i]=-1;
	    ps1=ps2=maxLen=0;
	    for(int i=0;i<n;++i)
	    {
	        ps1+=arr1[i];
	        ps2+=arr2[i];
	        currDiff=ps1-ps2+n;
	        if(ps1-ps2==0)
	        { //cout<<"hi";
	        maxLen=i+1;
	        }
	        else if(diff[currDiff]==-1)
	        {
	            //cout<<"hi2";
	            diff[currDiff]=i;
	        }
	        else
	        {
	            //cout<<"hi3";
	            if(i-diff[currDiff]>maxLen)
	                maxLen=i-diff[currDiff];
	        }
	    }
	    cout<<maxLen<<"\n";

	}
	return 0;
}
