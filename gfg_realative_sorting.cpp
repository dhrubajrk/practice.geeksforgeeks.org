#include <iostream>
using namespace std;

int main() {
	int t,m,n,hash[1001];
	cin>>t;
	while(t--)
	{
	    cin>>m>>n;
	    int a,arr[n],j;
	    for(int i=0;i<1001;++i)
	        hash[i]=0;
	    for(int i=0;i<m;++i)
	    {
	        cin>>a;
	        hash[a]++;
	    }
	    for(int i=0;i<n;++i)
	        cin>>arr[i];
	    for(int i=0;i<n;++i)
	    {
	        while(hash[arr[i]]--)
	            cout<<arr[i]<<" ";
	    }
	    for(int i=0;i<1001;++i)
	    {
	    	if(hash[i]>0)
	        while(hash[i]-- )
	           cout<<i<<" ";
	    }
	    
	}
	return 0;
}
