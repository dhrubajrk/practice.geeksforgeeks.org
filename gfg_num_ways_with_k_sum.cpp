#include<bits/stdc++.h>
using namespace std;
int count1,n;
int arr[11][11];
void countWays(int i,int j,int k)
{
    if(k<0)
        return;
    if(((k==0)&&(i==n-1))&&(j==n-1))
        count1++;
    if(i<n-1)
        countWays(i+1,j,k-arr[i+1][j]);
    if(j<n-1)
        countWays(i,j+1,k-arr[i][j+1]);
}

int main()
{
    int t,k;
    cin>>t;
    while(t--)
    {
        cin>>k>>n;
        for(int i=0;i<n;++i)
            for(int j=0;j<n;++j)
                cin>>arr[i][j];
        count1=0;
        countWays(0,0,k-arr[0][0]);
        cout<<count1<<"\n";
    }
return 0;
}
