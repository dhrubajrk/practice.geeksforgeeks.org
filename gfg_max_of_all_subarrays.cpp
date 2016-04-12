#include<bits/stdc++.h>
using namespace std;
int find_max(int arr[],int start,int end)
{
    int max=arr[start];
    for(int i=start;i<end;++i)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}
int main()
{
    int t,n,k,maxi;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;++i)
            cin>>arr[i];
        maxi=find_max(arr,0,k);
        cout<<maxi<<" ";
        for(int i=k;i<n;++i)
        {
            if(arr[i-k]!=maxi)
                maxi=max(maxi,arr[i]);
            else
                maxi=find_max(arr,i-k+1,i+1);
            cout<<maxi<<" ";
        }
        cout<<"\n";
    }
return 0;
}
