#include<bits/stdc++.h>
using namespace std;
void reverse(string& s,int start,int end)
{
    if(start>=end)
        return;// s;
    for(int i=start;i<(start+end+1)/2;++i)
    {
        char ch=s[i];
        s[i]=s[end+start-i];
        s[end+start-i]=ch;
    }
    //return s;
}
void trim(string& s)
{
   size_t p = s.find_first_not_of(" \t");
   s.erase(0, p);

   /*p = s.find_last_not_of(" \t");
   if (string::npos != p)
      s.erase(p+1);
      */
}
int main()
{
    int t,start;
    string s;
    cin>>t;
    getline(cin,s);
    while(t--)
    {
        getline(cin,s);
        trim(s);
        reverse(s,0,s.length()-1);
        trim(s);
        start=0;
        for(int i=0;i<s.length();++i)
        {
            if(s[i]==' ')
            {
                reverse(s,start,i-1);
                start=i+1;
            }
        }
        reverse(s,start,s.length()-1);
        cout<<s<<"\n";
    }
return 0;
}
