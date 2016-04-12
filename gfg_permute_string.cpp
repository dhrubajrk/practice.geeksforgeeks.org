#include<bits/stdc++.h>
using namespace std;
string swap(string s,int k,int i)
{
    char temp=s[k];
    s[k]=s[i];
    s[i]=temp;
    return s;
}
void permute(string s,int k)
{
    if(k==s.length()-1)
        cout<<s<<" ";
    else
    {
        for(int i=k;i<s.length();++i)
        {
            s=swap(s,k,i);
            permute(s,k+1);
            s=swap(s,k,i);
        }
    }

}
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        sort(s.begin(),s.end());
        permute(s,0);
        cout<<"\n";
    }
}

