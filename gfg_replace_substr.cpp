#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s,sub;
    cin>>t;
    while(t--)
    {
        cin>>s>>sub;
        size_t found=s.find(sub);
        size_t foundagain;
        while(found!=string::npos)
        {
            s.replace((int)found,sub.length(),"X");
            foundagain=s.find(sub,found+1);
            while(foundagain==found+1)
            {
                s.erase((int)foundagain,sub.length());
                foundagain=s.find(sub,found+1);
            }
            found=foundagain;
        }
        cout<<s<<"\n";
    }
return 0;
}
