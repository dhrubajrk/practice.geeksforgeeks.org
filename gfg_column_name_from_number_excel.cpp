#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[27]={'Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O',
                    'P','Q','R','S','T','U','V','W','X','Y','Z'};
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        stack<long long> s;
        while(n>0)
        {
            int k=n%26;
            s.push((long long)(n%26));
            n=n/(long long)26;
            if(k==0)
                n--;
        }
        while(!s.empty())
        {
            cout<<arr[s.top()];
            s.pop();
        }
        cout<<"\n";
    }
    return 0;

}
