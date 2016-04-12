#include <iostream>
using namespace std;

int main() {
	int t,a,b,n,r;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>n;
	    r=b-a;
	    cout<<a+r*(n-1)<<"\n";
	}
	return 0;
}
