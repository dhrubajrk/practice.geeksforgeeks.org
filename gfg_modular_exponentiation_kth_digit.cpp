#include<bits/stdc++.h>
using namespace std;
long long k;
long long trim(long long a)
{
    return a%(long long)(pow(10,k));
}
long long power(long long a,long long b)
{
    long long m;
    if(b==1)
        return a;
    m=power(a,b/2);
    if(b%2==0)
        return trim(m*m);
    else
        return trim(trim(m*m)*a);
}
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>k;
        cout<<(int)(power(a,b)/pow(10,k-1))%10<<"\n";
    }

return 0;
}

