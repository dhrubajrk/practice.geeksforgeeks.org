#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,maxi;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;++i)
            cin>>arr[i];
        int minarr[n],maxarr[n];
        for(int i=0;i<n;++i)
            minarr[i]=maxarr[i]=1;
        if(arr[0]>0)
            maxarr[0]=arr[0];
        else if(arr[0]<0)
            minarr[0]=arr[0];
        for(int i=1;i<n;++i)
        {
            if(arr[i]==0)
            {
                maxarr[i]=minarr[i]=1;
            }
            else if(arr[i]<0)
            {
                maxarr[i]= max(1,arr[i]*minarr[i-1]);
                minarr[i]= arr[i]*maxarr[i-1];
            }
            else
            {
                maxarr[i]= arr[i]*maxarr[i-1];
                minarr[i]= min(1,arr[i]*minarr[i-1]);
            }
        }
        maxi=maxarr[0];
        for(int i=1;i<n;++i)
            if(maxi<maxarr[i])
                maxi=maxarr[i];
        cout<<maxi<<"\n";
    }
return 0;
}
