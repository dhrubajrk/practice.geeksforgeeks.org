#include<bits/stdc++.h>
using namespace std;
set<int> num[10];
void printJumpingNumbers(int i,int n,int k,int d)
{
    if((k*10+d)>n)
        return;
    //cout<<k*10+d<<" ";
    num[i].insert(k*10+d);
    if(d!=0)
        printJumpingNumbers(i,n,k*10+d,d-1);
    if(d!=9)
        printJumpingNumbers(i,n,k*10+d,d+1);
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<"0 ";
        for(int i=1;i<=9;++i)
            printJumpingNumbers(i,n,0,i);
        for(int i=1;i<=9;++i)
        {
            for(set<int>::iterator it=num[i].begin(); it!=num[i].end(); ++it)
            {
                cout<<*it<<" ";
            }
        }
        for(int i=1;i<=9;++i)
            num[i].clear();
        cout<<"\n";
    }
return 0;
}
