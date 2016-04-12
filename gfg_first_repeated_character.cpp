#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,hash[26][2],min,a;
    bool flag;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>a;
        min=INT_MAX;
        flag=false;
        cin>>s;
        for(int i=0;i<26;++i)
        {
            hash[i][0]=0;
            hash[i][1]=-1;
        }
        for(int i=0;i<s.length();++i)
        {
            hash[(char)s[i]-'a'][0]++;
            if(hash[(char)s[i]-'a'][1]==-1)
                hash[(char)s[i]-'a'][1]=i;
        }
       /* for(int i=0;i<26;++i)
        {
            cout<<(char)('a'+i)<<" "<<hash[i][0]<<" "<<hash[i][1]<<"\n";
        }
        */
        for(int i=0;i<26;++i)
        {
            if(hash[i][0]>1)
            {
                if(hash[i][1]<min)
                    min=hash[i][1];
                flag=true;
            }
           // cout<<min<<"min\n";
        }
        //cout<<min<<"min\n";
        if(flag)
            cout<<s[min]<<"\n";
        else
            cout<<"-1\n";

    }
return 0;
}

