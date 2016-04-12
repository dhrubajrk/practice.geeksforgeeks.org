#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s1;
    cin>>t;
    while(t--)
    {
        cin>>s1;
        for(int i=1;i<s1.length();++i)
        {
            if((char)s1[i]>='A' && (char)s1[i]<='Z')
            {
                s1.insert(i," ");
                ++i;
            }
        }
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        cout<<s1<<"\n";
    }
return 0;
}
