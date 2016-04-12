#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hash[10001];
    int t,n,k,count;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<10001;++i)
            hash[i]=0;
        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
        }
        cin>>k;
        for(int i=0;i<n;++i)
        {
            if(hash[arr[i]]==0)
            {
                if(hash[abs(arr[i]-k)]>0)
                {
                    count++;
                    cout<<abs(arr[i]-k)<<" "<<arr[i]<<"\n";
                }
                if((arr[i]+k<10001)&&(hash[arr[i]+k]>0))
                {
                    count++;
                    cout<<abs(arr[i]+k)<<" "<<arr[i]<<"\n";
                }
            }
            else if((k==0)&& (hash[arr[i]]==1))
            {
                count++;
            }
            hash[arr[i]]++;
        }
        cout<<count<<"\n";
    }
return 0;
}
