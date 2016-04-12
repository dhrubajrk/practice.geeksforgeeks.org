#include<bits/stdc++.h>
using namespace std;
#define ppi pair< int,pair<int,int> >
bool comp(ppi a, ppi b)
{
    return a.second.second<b.second.second;
}
int main()
{
    int t,n,curr_time;
    cin>>t;
    while(t--)
    {
        curr_time=0;
        cin>>n;
        int arr1[n],arr2[n];
        for(int i=0;i<n;++i)
            cin>>arr1[i];
        for(int i=0;i<n;++i)
            cin>>arr2[i];
        ppi arr[n];
        for(int i=0;i<n;++i)
            arr[i]=make_pair(i+1,make_pair(arr1[i],arr2[i]));
        sort(arr,arr+n,comp);
        for(int i=0;i<n;++i)
        {
            if(arr[i].second.first > curr_time)
            {
                cout<<arr[i].first<<" ";
                curr_time=arr[i].second.second;
            }
        }
        cout<<"\n";
    }
return 0;
}
