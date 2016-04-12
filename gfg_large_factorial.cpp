#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n,k,j,arr[200];
    cin>>t;
    while(t--)
    {
        arr[0]=1;
        cin>>n;
        for(int i=1;i<200;++i)
            arr[i]=0;
        for(int i=1;i<=n;++i)
        {
            //cout<<i<<" ";
            j=k=0;
            while(j<200)
            {
                m=(arr[j]*i+k);
                // cout<<m<<" ";
                arr[j]=m%10;
                k=m/10;
                ++j;
            }
        }
        k=200;
        while(arr[--k]==0);
        cout<<k<<"\n";
        for(;k>=0;--k)
            cout<<arr[k];
        cout<<"\n";
    }
return 0;
}
