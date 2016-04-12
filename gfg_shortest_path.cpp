#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,steps;
    cin>>t;
    while(t--)
    {
        steps=0;
        cin>>n;
        while(n>1)
        {
            if(n==2)
            {
              steps++;
              n--;
              break;
            }
            if((n%3)!=0)
            {
                steps+=(n%3);
                n=n-(n%3);
            }
            else
            {
                steps++;
                n=n/3;
            }
            //cout<<n<<"\n";
        }
        cout<<steps<<"\n";
    }
return 0;
}
