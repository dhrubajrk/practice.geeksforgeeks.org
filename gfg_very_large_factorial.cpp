#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n,k,j;
	int arr[100][3000];
    /*for(int i=0;i<1001;++i)
    {    
        for(int j=0;j<3000;++j)
            arr[i][j]=0;
        arr[i][0]=1;
    }*/
    bool calculated[1001];
    for(int i=0;i<1001;++i)
        calculated[i]=false;
    calculated[0]=true;
    cout<<"hi1";
    scanf("%d",&t);
    while(t--)
    {
    	cout<<"hi2";
        scanf("%d",&n);
        for(int i=1;i<=n;++i)
        {
            if(!calculated[i])
            {
                j=k=0;
                while(j<3000)
                {
                    m=(arr[i-1][j]*i+k);
                    arr[i][j]=m%10;
                    k=m/10;
                    ++j;
                }
            }
        }
        k=3000;
        while(arr[n][--k]==0);
        for(;k>=0;--k)
            printf("%d",arr[n][k]);
        cout<<"\n";
    }
return 0;
}
