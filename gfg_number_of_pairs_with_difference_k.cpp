#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1001];
    int t,n,a,k,count;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        count=0;
        for(int i=0;i<1001;++i)
            arr[i]=0;
        for(int i=0;i<n;++i)
        {
            cin>>a;
            if((a<1001-k)&&(arr[a+k]>0))
                count+=arr[a+k];
            if((a>k-1) && ((arr[a-k]>0)))
                count+=arr[a-k];
            arr[a]++;
        }
        if(k==0)
            count/=2;
        cout<<count<<"\n";

    }
return 0;
}
