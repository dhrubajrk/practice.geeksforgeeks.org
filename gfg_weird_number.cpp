#include <bits/stdc++.h>
using namespace std;
bool isNotEqual(int n,stack<int> divisors)
{
    if(n==0)
        return false;
    if((n<0)||divisors.empty())
        return true;
    int k=divisors.top();
    divisors.pop();
    return (isNotEqual(n-k,divisors) && isNotEqual(n,divisors));
}
int main() {
	int t,n,count;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    count=0;
	    stack<int> divisors;
	    for(int i=1;i<=n/2;++i)
	    {
	        if(n%i==0)
	        {
	            divisors.push(i);
	            count+=i;
	        }
	    }
	    if ((count>n) && (isNotEqual(n,divisors)))
	    {
	       cout<<"Weird\n";
	    }
	    else
	       cout<<"Not Weird\n";

	}
	return 0;
}
