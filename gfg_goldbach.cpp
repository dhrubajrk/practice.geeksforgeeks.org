#include <bits/stdc++.h>
using namespace std;

int main() {
	bool flag,arr[1000001];
	int t,n,a;
	memset(arr,true,1000001);
	for(int i=2;i<1000;++i)
	{
	    if(arr[i])
	    {
	        for(int k=i*i;k<1000000;k+=i)
	            arr[k]=false;
	    }
	}
	cin>>t;
	while(t--)
	{
	    
	    	flag=false;
	        cin>>a;
	        for(int i=2;i<=a/2;++i)
	        {
	        	if(arr[i] && arr[a-i])
				{
					cout<<i<<" "<<a-i<<"\n";
					flag=true;
					break;
				}	
			}
			if(!flag)
				cout<<"-1\n";

	}
	return 0;
}
