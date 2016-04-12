#include<bits/stdc++.h>
using namespace std;
#define vvi vector< vector<long long> >
#define pb push_back

vvi multiply(vvi a,vvi b)
{
    vvi result(2,vector<long long>(2));

    for(int i=0;i<2;++i)
    {
        for(int j=0;j<2;++j)
        {
            for(int k=0;k<2;++k)
            {
                result[i][j]=(result[i][j]+(a[i][k]*b[k][j])%1000000007)%1000000007;
            }
        }
    }
    return result;
}

vvi power(vvi matrix,int n)
{
    if(n==1)
        return matrix;
    vvi product=power(matrix,n/2);
    if(n%2==0)
        return multiply(product,product);
    else
        return multiply(multiply(product,product),matrix);
}

int main() {
	int t,n;
	cin>>t;
	vvi arr(2),result;
	while(t--)
	{
	    cin>>n;
	    arr[0].pb(1);
	    arr[0].pb(1);
	    arr[1].pb(1);
	    arr[1].pb(0);
	    if(n==1)
            cout<<"0\n";
        else
        {
            result=power(arr,n-1);
            cout<<result[0][1]<<"\n";
        }

	    //cout<<result[0][0]<<" "<<result[0][1]<<" "<<result[1][0]<<" "<<result[1][1]<<"\n";
	}
	return 0;
}
