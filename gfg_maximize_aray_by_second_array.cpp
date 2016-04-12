#include <iostream>
using namespace std;

int main() {
	int t,n,a,hash1[10],hash2[10],low,high;
	cin>>t;
	while(t--)
	{
	    high=9;
	    low=0;
	    cin>>n;
	    int arr1[n],arr2[n];
	    for(int i=0;i<10;++i)
	        hash1[i]=hash2[i]=0;
	    for(int i=0;i<n;++i)
	    {
	        cin>>arr1[i];
	        hash1[arr1[i]]++;
	    }
	    for(int i=0;i<n;++i)
	    {
	        cin>>arr2[i];
	        hash2[arr2[i]]++;
	    }
	    //cout<<"hi";
	    while(low<=9 && high>=0)
        {
        	
            while(hash1[low]==0)
                low++;
            while(hash2[high]==0)
                high--;
            if(hash1[high]!=0)
                high--;
            else
            {
            	if (low<=9 && high>=0)
            	{
	                if((hash1[low]==1 && high>low)||(hash1[low]>1))
	                {
	                	//cout<<low<<" high"<<high<<"\n";
	                    hash1[high]++;
	                    hash2[high]--;
	                    hash2[low]++;
	                    hash1[low]--;
	                    high--;
	                }
	                else
	                {
	                	low++;
					}
				}
                
            }
        }	 
        for(int i=0;i<n;++i)
        {
            if(hash1[arr2[i]]==1)
            {
                cout<<arr2[i]<<" ";
                hash1[arr2[i]]--;
            }
        }
        for(int i=0;i<n;++i)
        {
            if(hash1[arr1[i]]==1)
            {
                cout<<arr1[i]<<" ";
                hash1[arr1[i]]--;
            }
        }
        cout<<"\n";
	}
	return 0;
}
