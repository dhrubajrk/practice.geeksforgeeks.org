#include <iostream>
using namespace std;

int main() {
	int t,n,a,count;
	bool digitFreq[10],flag;
	cin>>t;
	while(t--)
	{

	    flag=true;
	    for(int i=0;i<10;++i)
	    {
	        digitFreq[i]=false;
	    }
	    cin>>n;
	    a=n;
	    a=a/100;
	    if(a>0)
        {
            a=n;

            while(flag&&(a>0))
            {
                if(!digitFreq[(a%10)])
                {
                    digitFreq[(a%10)]=true;
                    a=a/10;
                }
                else
                {
                    flag=false;
                    break;
                }
                digitFreq[0]=false;
            }


            if(flag)
            {
                a=n*2;
                while(a>0)
                {
                    if(!digitFreq[(a%10)])
                    {
                        digitFreq[(a%10)]=true;
                        a=a/10;
                    }
                    else
                    {
                        flag=false;
                        break;
                    }
                }
            }
            if(flag)
            {
                a=n*3;
                while(a>0)
                {
                    if(!digitFreq[(a%10)])
                    {
                        digitFreq[(a%10)]=true;
                        a=a/10;
                    }
                    else
                    {
                        flag=false;
                        break;
                    }
                 }
            }
            if(!flag)
                cout<<"Not Fascinating\n";
            else
               cout<<"Fascinating\n";
        }
        else
            cout<<"Number should be atleast three digits\n";
	}
	return 0;
}
