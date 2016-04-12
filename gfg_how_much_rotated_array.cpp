#include <cstdio>
#include <iostream>
using namespace std;
int findPivot(int arr[],int start,int end)
{
    if(start>end)
        return -1;
    if(start==end)
        return start;
    int mid=(start+end)/2;
    cout<<mid<<" ";
    if(mid<end && arr[mid] > arr[mid+1])
        return mid;
    if(mid>start && arr[mid] < arr[mid-1])
        return (mid-1);
    if(arr[start]>=arr[mid])
        return findPivot(arr,start,mid-1);
    return findPivot(arr,mid+1,end);
}

int main() {
	int t,n,pivot;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;++i)
	        scanf("%d",&arr[i]);
        pivot=findPivot(arr,0,n-1)+1;
        if(pivot==n)
            cout<<"\n0\n";
        else
            cout<<"\n"<<pivot<<"\n";
	}
	return 0;
}
