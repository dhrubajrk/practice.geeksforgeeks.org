#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,zeroCount,rw,lw,bestwindow,bestwl;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;++i)
            cin>>arr[i];
        rw=lw=zeroCount=bestwindow=bestwl=0;
        cin>>k;
        while(rw<n)
        {
            if(zeroCount<=k)
            {
                if(arr[rw]==0)
                    zeroCount++;
                rw++;
            }
            else
            {
                if(arr[lw]==0)
                    zeroCount--;
                lw++;
            }
            if(rw-lw>bestwindow && zeroCount<=k)
            {
                bestwindow=rw-lw;
                bestwl=lw;
            }
        }
        cout<<bestwindow<<"\n";
    }
return 0;
}
