#include <iostream>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main() {
	int t,a,b,d,temp;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    d=gcd(a,b);
	    int arr[a];
	    for(int i=0;i<a;++i)
	        cin>>arr[a];
	    for(int i=0;i<d;++i)
	    {
	        for(int j=1;j<(a/d);++j)
	        {
	           temp = arr[(i+(a/d)*j)%a];
	           arr[(i+(a/d)*j)%a]=arr[(i+(a/d)*(j-1))%a];
	        }
	        arr[i]=temp;
	    }
	    for(int i=0;i<a;++i)
	    {
            cout<<arr[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
