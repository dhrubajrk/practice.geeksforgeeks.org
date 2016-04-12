#include<iostream>
using namespace std;

void printPalindromicSubstring(string s)
{
	int n=2*s.length()+1;
	int C=1,R=2,i,imirror,L[n];
	int expand=-1,diff=-1,start=-1,end=-1,maxLPSlength=0;
	for(i=2;i<n;++i)
	{
		imirror=2*C-i;
		expand=0;
		diff=R-i;
		if(diff>0)
		{
			if(L[imirror]<diff)
				L[i]=L[imirror];
			else if(L[imirror]==diff && i==n-1)
				L[i]=L[imirror];
			else if(L[imirror]==diff && i<n-1)
			{
				L[i]=L[imirror];
				expand=1;
			}
			else if(L[imirror]>diff)
			{
				L[i]=diff;
				expand=1;
			}
			
		}
		else
		{
			L[i]=0;
			expand=1;
		}
		if(expand==1)
		{
			
		}
	}
}
int main()
{
	
}
