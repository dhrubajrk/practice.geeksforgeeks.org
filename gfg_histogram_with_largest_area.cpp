#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,maxArea,areatp,tp;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    stack<int> s;
	    int arr[n];
	    for(int i=0;i<n;++i)
	        cin>>arr[i];
	    maxArea=0;
	    int i=0;
	    while(i<n)
	    {
	        if(s.empty() || arr[i]>arr[s.top()])
	            s.push(i++);
	        else
	        {
	            tp=s.top();
	            s.pop();
	            areatp=arr[tp]*(s.empty()?i:i-s.top()-1);
	            if(areatp>maxArea)
	                maxArea=areatp;
	        }
	    }
	    while(!s.empty())
	    {
	        tp=s.top();
	        s.pop();
	        areatp=arr[tp]*(s.empty()?i:i-s.top()-1);
	        if(areatp>maxArea)
	             maxArea=areatp;
	    }
	    cout<<maxArea<<"\n";
	}
	return 0;
}
