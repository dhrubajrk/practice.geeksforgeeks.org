#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,hash[257];
    cin>>t;
    string s;
    getline(cin,s,'\n');
    while(t--)
	{
	    for(int i=0;i<257;++i)
	        hash[i]=0;
	    getline(cin,s,'\n');
	    for(int i=0;i<s.length();++i)
	    {
	        if(hash[s[i]]==0)
	        {
	            hash[s[i]]++;
	            cout<<s[i];
	        }
	    }
	    cout<<"\n";
	}
return 0;
}
