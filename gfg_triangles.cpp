#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k,count;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;++i)
	        cin>>arr[i];
	    sort(arr,arr+n);
	    count=0;
	    for(int i=0;i<n-2;++i)
	    {
	        for(int j=i+1;j<n-1;++j)
	        {
	            k=n-1;
	            while(arr[i]+arr[j]<arr[k])
                    k--;
                count+=(k-j);
	        }
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
