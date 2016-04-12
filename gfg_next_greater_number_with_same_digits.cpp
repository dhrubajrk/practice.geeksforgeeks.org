#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,maxi;
	bool flag;
	string s;
	cin>>t;
	while(t--)
	{
	    flag=false;
	    cin>>s;
	    for(int i=s.length()-1;i>0;--i)
	    {
	        if(s[i]>s[i-1])
	        {
	            maxi=i;
	            for(int k=i+1;k<s.length();++k)
                    if((s[i-1]<s[k]) && (s[maxi]>s[k]))
                        maxi=k;
                swap(s[i-1],s[maxi]);
	            sort(s.begin()+i,s.end());
	            flag=true;
	            break;
	        }
	    }
	    if(flag)
	        cout<<s<<"\n";
	    else
	        cout<<"not possible\n";
	}
	return 0;
}
