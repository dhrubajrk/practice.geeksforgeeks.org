#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k;
    long long result;
    string s;
    cin>>t;
    while(t--)
    {
        result=0;
        cin>>s;
        for(int i=0;i<s.length();++i)
        {
            k=s[i]-'A'+1;
            result=result*26+k;
        }
        cout<<result<<"\n";
    }
    return 0;
}
