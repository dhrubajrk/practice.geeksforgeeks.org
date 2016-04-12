#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool arr[10000];
    memset(arr,true,10000);
    for(int p=2;p<=100;++p)
    {
        if(arr[p])
        {
            for(int j=p*2;j<=10000;j+=p)
            {
                arr[j]=false;
            }
        }
    }
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=2;i<=n;++i)
        {
            if(arr[i])
                cout<<i<<" ";
        }
        cout<<"\n";
    }
}
