#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    for(int i=0;i<4;++i)
	    {
	        //if((n&(1<<i))!=(n&(1<<(i+4))))
	        if((1&(n>>i))!=(1&(n>>(i+4))))
	        {
	            //cout<<"yes";
	            n =n ^ (1<<i);
	            n =n ^ ( 1<<(i+4));
	        }
	    }
	    cout<<n<<"\n";
	}
	return 0;
}
