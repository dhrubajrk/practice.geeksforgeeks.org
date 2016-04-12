#include<bits/stdc++.h>
using namespace std;
double power(double a,int n)
{
    if(n==1)
        return a;
    double product=power(a,n/2);
    if(n%2==0)
        return product*product;
    else
        return product*product*a;
}

int main()
{
    int t,n;
    double a,b,r;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        r=b/a;
        cin>>n;
        cout<<floor((a*(power(r,n-1))))<<"\n";
    }
return 0;
}
