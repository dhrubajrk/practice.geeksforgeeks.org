#include<bits/stdc++.h>
using namespace std;
#define vpi vector<pair<int,int> >
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;++i)
            cin>>arr[i];
        int i=0,k;
        vpi result;
        while(i<n-1)
        {
            while(arr[i+1]<=arr[i] && i<n-1)
                i++;
            k=i;
            while(arr[i+1]>=arr[i] && i<n-1)
                i++;
            result.push_back(make_pair(k,i));
        }
        for(int i=0;i<result.size();++i)
        {
            cout<<"("<<result[i].first<<" "<<result[i].second<<") ";
        }
        cout<<"\n";
    }
return 0;
}
