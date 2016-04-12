#include<bits/stdc++.h>
using namespace std;
#define pi pair<int,int>
int main()
{
    int t,a,b;
    pi points[4];
    cin>>t;
    while(t--)
    {
        for(int i=0;i<4;++i)
        {
            cin>>a>>b;
            points[i]=make_pair(a,b);
        }
        double dist[3];
        for(int i=1;i<4;++i)
        {
            dist[i-1]=(points[i].first-points[0].first)*(points[i].first-points[0].first)+
                            (points[i].second-points[0].second)*(points[i].second-points[0].second);
        }
        if(dist[0]==dist[1])
            swap(points[3],points[1]);
        else if(dist[0]==dist[2])
            swap(points[2],points[1]);
        else if(dist[1]!=dist[2])
        {
            cout<<"No\n";
            continue;
        }
        if((points[1].second-points[0].second)*(points[3].second-points[2].second)+
            (points[1].first-points[0].first)*(points[3].first-points[2].first)==0)
            cout<<"Yes\n";
        else
            cout<<"No\n";

    }
 return 0;
}
