#include<bits/stdc++.h>
using namespace std;
int gcd(int n,int d)
{
    if(d==0)
        return n;
    return gcd(d,n%d);
}
int main()
{
    int t,n,d,part,temp,temp1;
    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        int arr[n];
        for(int i=0;i<n;++i)
            cin>>arr[i];
        part=gcd(n,d);
        for(int i=n-1;i>n-part-1;--i)
        {
            int j=i-d;
            temp1=arr[i];
            while(1)
            {
                if(j<0)
                    j+=n;
                //cout<<"j"<<j<<"\n";
                if(j==i)
                    break;
                temp=arr[j];
                arr[j]=temp1;
                temp1=temp;
                j=j-d;
                //cout<<"j"<<j;
            }
            arr[i]=temp1;
            //cout<<n<<" ";
        }

        for(int i=0;i<n;++i)
            cout<<arr[i]<<" ";
        cout<<"\n";

    }

return 0;
}
