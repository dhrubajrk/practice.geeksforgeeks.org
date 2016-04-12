#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    bool flag;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        s.insert(s.length(),s);
        //cout<<s;
        bool DP[s.length()][s.length()];
        for(int i=0;i<s.length();++i)
            for(int j=0;j<s.length();++j)
                DP[i][j]=false;
        for(int i=0;i<s.length()-1;++i)
        {
            DP[i][i]=true;
            if(s[i]==s[i+1])
                DP[i][i+1]=true;
        }
        DP[s.length()-1][s.length()-1]=true;
        for(int l=2;l<s.length()/2;++l)
            for(int i=0;i<s.length()-l;++i)
            {
                if(s[i]==s[i+l] && DP[i+1][i+l-1])
                    DP[i][i+l]=true;
            }
        for(int i=0;i<s.length()/2;++i)
        {
            if(DP[i][i+s.length()/2-1])
            {
                flag=true;
                break;
            }
        }
        if(flag)
            cout<<"1\n";
        else
            cout<<"0\n";
    }
return 0;
}

