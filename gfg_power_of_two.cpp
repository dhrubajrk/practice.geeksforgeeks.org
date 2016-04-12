#include <iostream>
using namespace std;
bool isPowerOfTwo (unsigned int x)
{
 unsigned int numberOfOneBits = 0;

 while(x && numberOfOneBits <=1)
   {
    if ((x & 1) == 1) /* Is the least significant bit a 1? */
      numberOfOneBits++;
    x >>= 1;          /* Shift number one bit to the right */
   }

 return (numberOfOneBits == 1); /* 'True' if only one 1 bit */
}
int main() {
	long long t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    /*if(n& (long long)(n-1)==0)
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	        */

        cout<<isPowerOfTwo(n);
	}
	return 0;
}
