#include<bits/stdc++.h>
using namespace std;
#define mask ((1<<20)-1)
int main()
{
    int t,n,m;
    bool flag;
    cin>>t;
    while(t--)
    {
        flag=false;
        cin>>n;
        m=n;
        while(1)
        {
            for(int i=19;i>0;--i)
            {
                if(((n>>i)&1)&&((n>>i-1)&1))
                {
                    n= n &(((1<<20)-1)<<(i+1));
                    n= n+(1<<(i+1));
                    //cout<< " n"<<n;
                    flag=true;
                    break;
                }
                else
                    flag=false;
            }
            if(!flag)
                break;
        }
        cout<<n<<"\n";
    }
return 0;
}
