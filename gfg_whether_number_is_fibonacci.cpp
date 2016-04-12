#include <iostream>
using namespace std;

int main() {
	int t,n,a,b,c;
	cin>>t;
	while(t--)
	{
	    a=b=1;
	    cin>>n;
	    while(b<n)
	    {
	        c=a+b;
	        a=b;
	        b=c;
	    }
	    cout<<"bn"<<b<<" "<<n<<"\n";
	    if(b==n)
	        cout<<"Yes\n";
	    else
	        cout<<"No\n";
	}
	return 0;
}
