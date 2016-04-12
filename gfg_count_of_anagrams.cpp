#include<iostream>
using namespace std;
int main()
{
    int t;
    bool flag;
    int xorpat,xortxt,hashpat[26],hashtxt[26],count;
    string txt,pat;
    cin>>t;
    while(t--)
    {
        flag=true;
        xortxt=xorpat=count=0;
        cin>>txt>>pat;
        if(txt.length()<pat.length())
        {
            cout<<"0\n";
            continue;
        }
        for(int i=0;i<26;++i)
            hashpat[i]=hashtxt[i]=0;
        for(int i=0;i<pat.length();++i)
        {
            hashtxt[txt[i]-'a']++;
            hashpat[pat[i]-'a']++;
            xortxt^=txt[i];
            xorpat^=pat[i];
        }
        if(xortxt==xorpat)
        {
            for(int i=0;i<26;++i)
            {
                if(hashpat[i]!=hashtxt[i])
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
                count++;
        }
        for(int i=pat.length();i<txt.length();++i)
        {
            flag=true;
            xortxt^=txt[i];
            hashtxt[txt[i]-'a']++;
            xortxt^=txt[i-pat.length()];
            hashtxt[txt[i-pat.length()]-'a']--;
            if(xortxt==xorpat)
            {

                for(int i=0;i<26;++i)
                {
                    if(hashpat[i]!=hashtxt[i])
                    {
                        flag=false;
                        break;
                    }
                }
                if(flag)
                    count++;
            }
        }
        cout<<count<<"\n";

    }
    return 0;
}
