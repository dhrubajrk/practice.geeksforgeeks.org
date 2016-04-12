#include<bits/stdc++.h>
using namespace std;
int findMax(int arr[],int n)
{
    int start=0,end=n;
    int mid=(start+end)/2;
    while(1)
    {
        if((arr[mid-1]<=arr[mid] && arr[mid+1]<=arr[mid]))
            break;
        else if(arr[mid-1]<arr[mid] && arr[mid+1]>arr[mid])
            start=mid+1;
        else
            end=mid-1;
        mid=(start+end)/2;
    }
    return arr[mid];
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;++i)
            cin>>arr[i];
        cout<<findMax(arr,n)<<"\n";
    }
return 0;
}
