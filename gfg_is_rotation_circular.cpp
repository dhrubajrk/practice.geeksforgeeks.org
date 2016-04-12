#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,dir;
    string s;
    cin>>t;
    while(t--)
    {
        x=y=dir=0;
        cin>>s;
        for(int i=0;i<s.length();++i)
        {
            if(s[i]=='L')
            {
                dir=(dir+1)%4;
            }
            else if(s[i]=='R')
            {
                dir=dir-1;
                if(dir<0)
                    dir+=4;
            }
            else if(s[i]=='G')
            {
                switch(dir)
                {
                    case 0:x++;
                            break;
                    case 1:y++;
                            break;
                    case 2:x--;
                            break;
                    case 3:y--;
                            break;
                }
            }
        }
        if(x==0 && y==0)
            cout<<"Circular\n";
        else
            cout<<"Not Circular\n";
    }
    return 0;
}
